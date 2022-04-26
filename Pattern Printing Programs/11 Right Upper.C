#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, j=0, X=0;

    printf("\n Enter Row & Column Value : ");
    scanf("%d",&X);

    printf("\n Pattern is = \n\n");

    for(i=0; i<=X; i++)
    {
        for(j=0; j<=X; j++)
        {
            if(i<=j)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n Thanks....");
    getch();
    return 0;
}

