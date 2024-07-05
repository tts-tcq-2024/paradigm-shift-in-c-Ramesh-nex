#include <stdio.h>
#include <assert.h>

int OutOfRange(float val1, float val2, float chargeRate)
{
  if(val1 < 0 || val1 > 45) 
  {
    return 1;
  }
  else if(val2 < 20 || val2 > 80) 
  {
    return 2;
  }
  else if(val3>0.8)
  {
    return 3;
  }
  return 0;
}
void Display(int out)
{
  if(out ==1)
  {
    printf("Temperature out of range!\n");
  }
  else if(out ==2)
  {
    printf("State of Charge out of range!\n");
  }
  else
  {
    printf("Charge Rate out of range!\n");
  }
}
int batteryIsOk(float temperature, float soc, float chargeRate)
{
  int a;
  a=OutOfRange( temperature,  soc,  chargeRate);
  if(a!=0)
  {
    Display(a);
    return 0;
  }
  return 1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
