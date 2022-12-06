#include<stdio.h>
#include<conio.h>

void StrConcat(char *Str1, char *Str2)
{
    while(*Str1 != '\0')
    {
        Str1++;
    }

    *Str1 = ' ';
    Str1++;

    while(*Str2 != '\0')
    {
        *Str1 = *Str2;
        Str2++;
        Str1++;
    }

    *Str2 = '\0';

    return;

}

int main()
{
    char Arr1[20], Arr2[20];

    printf("\n\t Enter 1st String => ");
    scanf("%[^\n]",&Arr1);

    printf("\n\t Enter 2nd String => ");
    scanf(" %[^\n]",&Arr2);

    StrConcat(Arr1,Arr2);

    printf("\n\t After Concating String : %s",Arr1);

    getch();
    return 0;
}
