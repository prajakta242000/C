///Program to print Tables in given Range - Fixed

#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0, SNum=15, ENum=20;

    for(C=SNum; C<=ENum; C++)
    {
        for(R=1; R<=10; R++)
        {
            printf("\n %3d",(R * C));
        }
        printf("\n");
    }
    printf("\n Thanks...");
    getch();
    return 0;
}
