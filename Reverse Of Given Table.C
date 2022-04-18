#include<stdio.h>
#include<conio.h>
int main()
{
    int cnt=0,num=0;
    printf("\n Enter number to get table reverse:");
    scanf("%d",&num);

    {
        for(cnt=10;cnt>=1;cnt--)
        printf("\n%d",(cnt*num));
    }
    getch();
    return 0;
}
