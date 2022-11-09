#include<stdio.h>
#include<conio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("\n\t Given Number Is Small.");
    }
    else if(iNo >= 50 && iNo < 100)
    {
        printf("\n\t Given Number Is Medium.");
    }
    else
    {
        printf("\n\t Given Number Is Large.");
    }
}

int main()
{
    int iValue = 0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&iValue);

    Number(iValue);

    getch();
    return 0;
}
