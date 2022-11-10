#include<stdio.h>
#include<conio.h>

int FactorialDiff(int iNo)
{
    int i = 0, Fact1 = 0, Fact2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=1,Fact1=1;i<=iNo;i++)
    {
        if(i % 2 == 0)
        {
            Fact1*=i;
        }
    }

    for(i=1,Fact2=1;i<=iNo;i++)
    {
        if(i % 2 != 0)
        {
            Fact2*=i;
        }
    }
    return Fact1-Fact2;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("\n Difference Between Even Factorial And Odd Factorial Is %d.",iRet);

    getch();
    return 0;
}
