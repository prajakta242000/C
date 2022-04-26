#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, j=0, R=0, C=0;
    printf("\n Enter Row Value = ");
    scanf("%d",&R);

    printf("\n Enter Column Value = ");
    scanf("%d",&C);

    printf("\n\n Pattern is = \n\n ");

    for(i=1; i<=R; i++)
    {
        for(j=1; j<=C; j++)
        {
            if(i == 1 || i == R || j == 1 || j == C)
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
    printf("\n Thanks...");
    getch();
    return 0;
}
