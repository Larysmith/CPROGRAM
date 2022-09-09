
#include <stdio.h>

int main(void) 
{
  //declare variables
  int l;
  int b;
  printf("Enter the lenght of rectangle :");
  scanf("%d",&l);
  printf("Enter the Breadth of rectangle :");
  scanf("%d",&b);
  //formular for area of triangle is lenght multiply by breadth
  int area=l*b;
  printf("The Area of rectangle is: %d",area);
  return 0;
}