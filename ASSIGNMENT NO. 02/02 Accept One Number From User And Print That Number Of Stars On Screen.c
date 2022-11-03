#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    while( iNo > 0 )
    {
        printf(" *");
        iNo--;
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
