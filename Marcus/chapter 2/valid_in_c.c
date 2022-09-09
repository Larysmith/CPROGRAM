#include <stdio.h>
int main ()
{
    // int a; b=a; is invalid
    // int v=3^3; is valid
    // char dt='21 Dec 2020'; is valid
    //3.0/8-2 is a float datatype


    int num;
    printf("Enter a number :" );
    scanf("%d",&num);
    if (num %3==0){
        printf("%d is divisible by 3", num);}
    
    else
        {printf("%d is not divisible by 3", num);}

    return 0;


    //int x=2, y=3, k=1;
    //int result  3*x /y-z+k;
    //2-3+1;
    //0



    //3.0 + 1 will be float
}