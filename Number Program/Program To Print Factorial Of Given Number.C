#include<stdio.h>
#include<conio.h>
int main()
{
    int Num=0, Fact=0, Temp=0;
    printf("\n Enter a number to find factorial = ");
    scanf("%d",&Num);

    for(Fact=1, Temp=Num; Temp>0; Temp--)
    {
        Fact = Fact * Temp;
    }
    printf("\n Factorial of %d is = %d",Num,Fact);
    getch();
    return 0;
}
