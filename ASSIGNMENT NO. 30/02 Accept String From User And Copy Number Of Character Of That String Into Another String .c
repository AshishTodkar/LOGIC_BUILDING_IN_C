#include<stdio.h>
#include<conio.h>

void StrCpy(char *Str1, char *Str2,int No)
{
    while(*Str1 != '\0' && No > 0)
    {
        *Str2 = *Str1;
        Str1++;
        Str2++;
        No--;
    }

    *Str2 = '\0';

    return;

}

int main()
{
    char Arr1[20], Arr2[20];
    int i = 0;

    printf("\n\t Enter A String => ");
    scanf("%[^\n]",&Arr1);

    printf("\n\t Enter A Number Of Character Do You Want To Copy => ");
    scanf("%d",&i);

    StrCpy(Arr1,Arr2,i);

    printf("\n\t After Copying String Is : %s",Arr2);

    getch();
    return 0;
}
