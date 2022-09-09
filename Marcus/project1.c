#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    int j=rand();
    printf("Guess a number ");
    scanf("%d",&i);
   // scanf("%d",j);
    if ( i==j)
     {
        printf("You have guess the right number ");
     }
    else if ( i>j)
        {
        printf("The number is greater than the number ");
         }
    else if ( i<j)
        {
        printf("he number is smaller than the number ");
        }
    
    //use rand to generate the number
  //  printf("The random number is : %d",rand());

    return 0;
}