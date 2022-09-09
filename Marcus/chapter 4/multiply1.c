#include <stdio.h>
int main()
{
    
  int n=8;
  int i;
  int sum;
  int j;
  //int j=n * i;
  //printf("%d", n);
  for (i = 1; i <= 10; i++) {
     j=n * i;
    printf("%d * %d = %d \n", n, i, j);
  }
  sum=j+j;
  printf("\nTotal is : %d\n", sum);
  return 0;
}
   