#include<stdio.h>
#include<conio.h>
int main()
{
    int Num=0, Cnt=1;
    printf("\n Enter Number to Get its Table = ");
    scanf("%d",&Num);

    printf("\n Table of %d is => \n",Num);

    while(Cnt<=10)
    {
        printf("\n %d", (Num * Cnt));
        Cnt++;
    }
    printf("\n Thanks....");
    getch();
    return 0;
}
