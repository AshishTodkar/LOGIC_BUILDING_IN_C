#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *Str)
{
    while(*Str != '\0')
    {
        if(*Str == 'A' || *Str == 'a' || *Str == 'E' || *Str == 'e' || *Str == 'I' || *Str == 'i' || *Str == 'O' || *Str == 'o' || *Str == 'U' || *Str == 'u' )
        {
            return 1;
        }

        *Str++;
    }
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("\n\t Enter A String => ");
    scanf("%[^\n]",&Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("\n\t Given String Contain Vowels.");
    }
    else
    {
        printf("\n\t Given String Does Not Contain Vowels.");
    }

    getch();
    return 0;
}
