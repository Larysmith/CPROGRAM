#include <stdio.h>

int main(void)
{
  //declaring variables
  float p,r,t,si1,si2;
  printf("Enter the principle value :");
  scanf("%f",&p);
  printf("Enter the rate value :");
  scanf("%f",&r);
  printf("Enter the time value :");
  scanf("%f",&t);
  //formular for simple interest is multiply principle, rate and time all divide by 100
  //the formular has been split into smaller entities
  si1=p*r*t;
  si2=si1/100;
  printf("The simple interest is :%f",si2);
  return 0;
}