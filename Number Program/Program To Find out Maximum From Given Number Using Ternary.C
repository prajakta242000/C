#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1=0, Num2=0;
    up:
        printf("\n\n Enter Number To Find Maximum=>\n");

        printf("\n Enter 1st Number:");
        scanf("%d",&Num1);

        printf("\n Enter 2nd Number:");
        scanf("%d",&Num2);

        if(Num1 == Num2)
        {
            printf("\n Both Numbers are EQUAL");
            goto up;
        }
        (Num1 > Num2) ? printf("\n 1st Number is Maximum"): printf("\n 2nd Number is Maximum");
        printf("\n Thanks...");
        getch();
        return 0;
}
