#include <stdio.h>

int main(void) 
{
 //declare variables
  int r;
  int h;
  float pie=3.142;
  printf("Enter the radious of a circle : ");
  scanf("%d",&r);
  //formular for area of circle is pie multiply by the square of radious
  float area= pie*r*r;
  printf("Area of a circle is :%f",area);
  //volume of a cylinder is area of a circle multiply by the hieght of the cylinder
  printf("\nEnter the height of a cylinder : ");
  scanf("%d",&h);
  float volume=area*h;
  printf("Volume of a cylinder is : %f",volume);
  return 0;
}