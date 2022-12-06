#include<stdio.h>
#include<conio.h>

void StrCpy(char *Str1, char *Str2)
{
    while(*Str1 != '\0')
    {
        if( *Str1 >= 'a' && *Str1 <= 'z' )
        {
            *Str2 = *Str1;
            Str2++;
        }

        Str1++;
    }

    *Str2 = '\0';

    return;

}

int main()
{
    char Arr1[20], Arr2[20];

    printf("\n\t Enter A String => ");
    scanf("%[^\n]",&Arr1);

    StrCpy(Arr1,Arr2);

    printf("\n\t After Copying String Is : %s",Arr2);

    getch();
    return 0;
}
