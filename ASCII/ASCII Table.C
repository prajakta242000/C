#include<stdio.h>
#include<conio.h>
int main()
{
    int val=0;
    printf("\n ASCII TABLE");

    for(val=0; val<128; val++)
    {
        printf("\n %d = % c",val,val);
    }
    printf("\n Thanks...");
    getch();
    return 0;
}
