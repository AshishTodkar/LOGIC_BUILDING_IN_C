#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    if( iNo < 10 )
    {
        printf("\n Hello");
    }
    else
    {
        printf("\n Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
