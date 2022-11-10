#include<stdio.h>
#include<conio.h>

int EvenFactorial(int iNo)
{
    int i = 0, Fact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=1,Fact=1;i<=iNo;i++)
    {
        if(i % 2 == 0)
        {
            Fact*=i;
        }
    }

    return Fact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("\n Even Factorial Is %d.",iRet);

    getch();
    return 0;
}
