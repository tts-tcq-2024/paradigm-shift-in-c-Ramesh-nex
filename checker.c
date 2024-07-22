#include <stdio.h>
#include <assert.h>

int language = 0;

void PrintMessage(const char* msg) {
    if (language == 0) {
        printf("EN: %s\n", msg_en);
    } else if (language == 1) {
        printf("DE: %s\n", msg_de);
    }
}
int OutOfRange(float val, float min, float max ,const char* msg)
{
  if (val < min || val > max) 
  {
    PrintMessage(msg);
    return 0;
  }
    return 1;
}
int batteryIsOk(float temperature, float soc, float chargeRate)
{
   return OutOfRange(temperature,0,45,"Temperature out of range!")
      && OutOfRange(soc,20,80,"SOC out of range!")
      && OutOfRange(chargeRate,0,0.8,"Charge Rate out of range!");
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
