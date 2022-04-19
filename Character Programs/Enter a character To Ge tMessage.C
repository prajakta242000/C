#include<stdio.h>
#include<conio.h>
int main()
{
    char Letter=0;
    printf("\n Enter Character to get Message:");
    scanf("%c",&Letter);
    switch(Letter)
    {
    case 'A':
    case 'a':
        printf("\n Welcome");
        break;
    case 'B':
    case 'b':
        printf("\n Good Bye");
        break;
    case 'C':
    case 'c':
        printf("\n Have a nice day");
        break;
    case 'D':
    case 'd':
        printf("\n Good Day");
        break;
    default:
        printf("\n Invalid Character");
        }
        getch();
        return 0;
}
