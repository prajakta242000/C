#include<stdio.h>
#include<conio.h>
int main()
{
    char Letter=0;
    printf("\n Enter Character For Vowel Check:");
    scanf("%c",&Letter);
    switch(Letter)
    {
       case'A':
       case'a':
       case'e':
       case'E':
       case'I':
       case'i':
       case'O':
       case'o':
       case'U':
       case'u':
           printf("\n Entered Letter is Vowel.");
           break;
       default:
           printf("\n Enter Letter is not Vowel.");
           break;

    }
    printf("\n\n Thanks For Input...");
    getch();
    return 0;
}
