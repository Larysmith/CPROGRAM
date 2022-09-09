#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the value for a : ");
    scanf("%d",&a);
    printf("Enter the value for b : ");
    scanf("%d",&b);
    printf("Enter the value for c : ");
    scanf("%d",&c);
    printf("Enter the value for d : ");
    scanf("%d",&d);
    if(a>b && a>c && a>d)
       {
            printf("A is the bigger number");
       }
    else if(b>a && b>c && b>d)
       {
            printf("B is the bigger number");
       }
     else if(c>a && c>b && c>d)
       {
            printf("C is the bigger number");
       }
    else if(d>a && d>b && d>c)
       {
            printf("D is the bigger number");
       }
     return 0;

}