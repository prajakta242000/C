#include<stdio.h>
#include<conio.h>
int main()
{
    int Num=0, dCnt=0;
    up:

    printf("\n Enter a Positive Number = ");
    scanf("%d",&Num);

    if(Num <= 0)
    {
        printf("\n Do Enter Positive Integer Value \n");
        goto up;
    }
    while(Num > 0)
    {
        printf("\n Num = %d\t DigCount = %d",Num,dCnt);
        Num=Num/10;
        dCnt++;
    }
    printf("\n Digits in given Number are = %d",dCnt);
    getch();
    return 0;
}
