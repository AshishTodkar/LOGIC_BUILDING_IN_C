#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    if( ch >= 'A' && ch <= 'Z' )
    {
        printf("\n\t Corresponding Character Is : %c",ch+32);
    }
    else if( ch >= 'a' && ch <= 'z' )
    {
        printf("\n\t Corresponding Character Is : %c",ch-32);
    }
    else
    {
        printf("\n\t %c",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("\n\t Enter A Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    getch();
    return 0;
}
