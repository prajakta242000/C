#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n Enter a Character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("\n %c is Uppercase Alphabet",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\n %c is Lowercase Alphabet",ch);
    }
    else
    {
        printf("\n %c is not a Alphabet",ch);
    }
    getch();
    return 0;
}
