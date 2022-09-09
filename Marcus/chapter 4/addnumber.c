#include <stdio.h>
int main()
{
    
  int i=0;
  int sum;
  
  while (i<=10)
  {
    printf("%d + ", i++);
    
  }
  sum=i+i;
  printf("...\nTotal is : %d\n", sum);
  return 0;
}