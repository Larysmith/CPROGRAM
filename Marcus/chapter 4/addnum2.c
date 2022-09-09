#include <stdio.h>
int main()
{
    
  int i=0;
  int sum;
  for ( i = 0; i <=10; i++)
  {
    printf("%d + ", i);
  }
  
  sum=i+i;
  printf("...\nTotal is : %d\n", sum);
  return 0;
}