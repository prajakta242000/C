#include<stdio.h>
#include<conio.h>
int main()
{
    int Num=0;
    printf("\n Enter a number to find whether it is EVEN or ODD = ");
    scanf("%d",&Num);

    if(Num % 2 == 0)
    {
        printf("\n Given Number is EVEN");
    }
    else
    {
        printf("\n Given Number is ODD");
    }
    printf("\n Thanks For Input....");
    getch();
    return 0;
}
