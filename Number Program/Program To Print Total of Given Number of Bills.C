#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, Cnt=0, Amount=0, Bill_Sum=0;

    printf("\n Enter how many Bill do you have = ",i);
    scanf("%d",&Cnt);

    for(i=1; i<=Cnt; i++)
    {
        printf("\n Enter Bill Number %d = ",i);
        scanf("%d",&Amount);

        Bill_Sum = Bill_Sum + Amount;
    }
    printf("\n Total of Bills = %d",Bill_Sum);
    getch();
    return 0;
}
