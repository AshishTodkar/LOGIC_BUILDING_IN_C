#include<stdio.h>
#include<conio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if( iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i=1;i<=iNo/2;i++)
    {
        if( iNo % i == 0 && i % 2 == 0)
        {
            printf("\t %d",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    getch();
    return 0;
}
