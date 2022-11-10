#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=1;i<=iNo;i++)
    {
        printf(" * ");
    }

    for(i=1;i<=iNo;i++)
    {
        printf(" # ");
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
