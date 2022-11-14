#include<stdio.h>
#include<conio.h>

int CountOdd(int iNo)
{
    int iDigit = 0, Cnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            Cnt++;
        }
        iNo = iNo / 10;
    }

    return Cnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("\n Count Of Odd Digits In Given Number Is %d.",iRet);

    getch();
    return 0;
}
