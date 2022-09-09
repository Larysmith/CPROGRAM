#include <stdio.h>

int main() 
{
  //declare variables
  float c;
  float f1;
  float f2;
  printf("Enter celcius in degrees : ");
  scanf("%f",&c);
  //break the formular to for conversion into smaller entity
  f1=c*1.8;
  f2=f1+32;
  printf("Fahrenheit equals : %f",f2);
  return 0;
}
