#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    if(iNo == 1 || iNo == -1)
    {
        printf("\n\t One.");
    }
    else if(iNo == 2 || iNo == -2)
    {
        printf("\n\t Two.");
    }
    else if(iNo == 3 || iNo == -3)
    {
        printf("\n\t Three.");
    }
    else if(iNo == 4 || iNo == -4)
    {
        printf("\n\t Four.");
    }
    else if(iNo == 5 || iNo == -5)
    {
        printf("\n\t Five.");
    }
    else if(iNo == 6 || iNo == -6)
    {
        printf("\n\t Six.");
    }
    else if(iNo == 7 || iNo == -7)
    {
        printf("\n\t Seven.");
    }
    else if(iNo == 8 || iNo == -8)
    {
        printf("\n\t Eight.");
    }
    else if(iNo == 9 || iNo == -9)
    {
        printf("\n\t Nine.");
    }
    else
    {
        printf("\n\t Invalid Input.");
    }
}

int main()
{
    int iValue = 0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
