#include<stdio.h>
#include<conio.h>
int main()
{
    char Letter=0;
    printf("\n Enter a Character For VOWEL or CONSTANNT:");
    Letter=getche();
    switch(Letter)
    {
    case'B':
    case'b':
    case'C':
    case'c':
    case'D':
    case'd':
    case'F':
    case'f':
    case'G':
    case'g':
    case'H':
    case'h':
    case'J':
    case'j':
    case'K':
    case'k':
    case'L':
    case'l':
    case'M':
    case'm':
    case'N':
    case'n':
    case'P':
    case'p':
    case'Q':
    case'q':
    case'R':
    case'r':
    case'S':
    case's':
    case'T':
    case't':
    case'V':
    case'v':
    case'W':
    case'w':
    case'X':
    case'x':
    case'Y':
    case'y':
    case'Z':
    case'z':
        printf("\n Entered Letter is Constant.");
        break;

     default:
        printf("\n Entered Letter is Vowel.");
        break;
    }
    printf("\n\n Thanks For Input....");
    getch();
    return 0;

}

