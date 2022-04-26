#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';
    int i=0, j=0, X=0;

    printf("\n Enter Row & Column Value = ");
    scanf("%d",&X);

    printf("\n Pattern is = \n\n");

    for(i=1; i<=X; i++)
    {
        for(ch='Q',j=1; j<=X; j++)
        {
            if(i>=j)
            {
                printf(" %c ",ch);
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
