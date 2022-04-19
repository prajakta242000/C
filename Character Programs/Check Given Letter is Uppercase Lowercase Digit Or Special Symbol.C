9#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n Enter a Letter=");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("\n %c is Uppercase Letter",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\n %c is Lowercase Letter",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("\n %c is a Digit",ch);
    }
    else
    {
        printf("\n %c is a Special Symbol",ch);
    }
    getch();
    return 0;
}
