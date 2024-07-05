#include <stdio.h>
#include <assert.h>

int OutOfRange(float val, float min, float max ,int out)
{
  if (value < min || value > max) {
         if(out ==1)
  {
    printf("Temperature out of range!\n");
     return 0;
  }
  else if(out ==2)
  {
    printf("State of Charge out of range!\n");
     return 0;
  }
  else
  {
    printf("Charge Rate out of range!\n");
     return 0;
  }

    }
    return 1;
}
int batteryIsOk(float temperature, float soc, float chargeRate)
{
   return OutOfRange(temperature,0,45,1)
      && OutOfRange(soc,20,80,2)
      && OutOfRange(chargeRate,0,0.8,3);
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
