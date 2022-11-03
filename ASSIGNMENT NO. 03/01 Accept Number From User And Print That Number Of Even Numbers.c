#include<stdio.h>
#include<conio.h>

void PrintEven(int iNo)
{
    int No = 0;

    if( iNo <= 0)
    {
        return;
    }

    for(No=1;iNo > 0;iNo--,No++)
    {
        printf("\t %d",No*2);
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    getch();
    return 0;
}
