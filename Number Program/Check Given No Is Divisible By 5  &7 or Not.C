#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0;
    printf("\n Enter a Number:");
    scanf("%d",&No);
    if((No%5==0) && (No%7==0))
    {
        printf("\n %d is Divisible by Both 5 & 7 ",No);
    }
    else if((No%5==0))
    {
        printf("\n %d is Divisible by 5 Not by 7",No);
    }
    else if((No%7==0))
    {
        printf("\n %d is Divisible By 7 Not 5",No);
    }
    else
    {
        printf("\n %d is Not Divisible By 5 Nor 7",No);
    }
    getch();
    return 0;
}
