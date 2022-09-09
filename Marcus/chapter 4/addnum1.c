#include <stdio.h>
int main()
{
    
  int i=0;
  int sum;
  do
    {
    printf("%d + ", i++);
     } 
  while (i<=10);
   
  sum=i+i;
  printf("...\nTotal is : %d\n", sum);
  return 0;
}