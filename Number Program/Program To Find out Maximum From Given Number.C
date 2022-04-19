#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1=0, Num2=0;

    printf("\n Enter Number to find Maximum of given Number = ");

    printf("\n Enter 1st Number = ");
    scanf("%d",&Num1);

    printf("\n Enter 2nd Number = ");
    scanf("%d",&Num2);

    if(Num1 == Num2)
    {
        printf("\n Both Number are Equal");
        goto dwn;
    }
    if(Num1>Num2)
    {
        printf("\n 1st Number %d is Greater than %d",Num1,Num2);
    }
    else
    {
        printf("\n 2nd Number %d is Greater than %d",Num2,Num1);
    }
    dwn:
    printf("\n Thanks for input...");
    getch();
    return 0;
}
