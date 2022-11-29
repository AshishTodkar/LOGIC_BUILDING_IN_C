#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    if( ch >= 'A' && ch <= 'Z' )
    {
        while( ch <= 'Z')
        {
             printf("\t %c",ch);
             ch++;
        }
    }
    else if( ch >= 'a' && ch <= 'z' )
    {
        while( ch >= 'a')
        {
             printf("\t %c",ch);
             ch--;
        }
    }

    return;
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
