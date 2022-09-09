#include <stdio.h>
int main()
{
    int mathematics, english, physics, chemistry, biology, utme;

    printf("Enter your  Mathematics score : ");
    scanf("%d",&mathematics);
    printf("Enter your  English score : ");
    scanf("%d",&english);
    printf("Enter your  Physics score : ");
    scanf("%d",&physics);
    printf("Enter your  Chemistry score : ");
    scanf("%d",&chemistry);
    printf("Enter your  Biology score : ");
    scanf("%d",&biology);
    printf("Enter your  UTME score : ");
    scanf("%d",&utme);
     if(mathematics>=50 && english>=50  && physics>=50 && chemistry>=50 && biology>=50 && utme>=180)
        {
            printf("You have Qualified for Post UTME");
        }

     else
        {
            printf("You do not Qualify for post UTME");
        }

}