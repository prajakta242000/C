#include<stdio.h>
#include<conio.h>
#define Size 4

int main()
{
    int i=0, Bill_Sum=0,Bill[Size]={0};

    for(i=0; i<Size; i++)
    {
        printf("\n Enter Bill No %d = ",(i+1));
        scanf("%d",&Bill[i]);

        Bill_Sum = Bill_Sum + Bill[i];
    }
    getch();

    printf("\n Bills Generated Today => \n");

    for(i=0; i<Size; i++)
    {
        printf("\n Amount in Bill No %d = %d", (i+1001),Bill[i]);
    }
    printf("\n\n========================\n\n");

    printf("\n Total Amount Received Today = %d.",Bill_Sum);

    getch();
    return 0;
}
