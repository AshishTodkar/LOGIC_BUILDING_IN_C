#include<stdio.h>
#include<conio.h>

int Difference(char *Str)
{
    int Cap_Cnt = 0 , Small_Cnt = 0;

    while(*Str != '\0')
    {
        if(*Str >= 'a' && *Str <= 'z')
        {
            Small_Cnt++;
        }

        if(*Str >= 'A' && *Str <= 'Z')
        {
            Cap_Cnt++;
        }

        *Str++;
    }

    return Small_Cnt - Cap_Cnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("\n\t Enter A String => ");
    scanf("%[^\n]",&Arr);

    iRet = Difference(Arr);

    printf("\n\t Difference Between Small Letters And Capital Letters Is %d.",iRet);

    getch();
    return 0;
}
