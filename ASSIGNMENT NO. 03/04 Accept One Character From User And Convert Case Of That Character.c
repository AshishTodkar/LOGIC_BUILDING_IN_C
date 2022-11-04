#include<stdio.h>
#include<conio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("\n After Converting Case : %c",cValue+32);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("\n After Converting Case : %c",cValue-32);
    }
}

int main()
{
    char cValue = '\0';

    printf("\n Enter A Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    getch();
    return 0;
}
