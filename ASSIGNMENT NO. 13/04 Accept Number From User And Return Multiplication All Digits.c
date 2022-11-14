#include<stdio.h>
#include<conio.h>

int MulDigit(int iNo)
{
    int iDigit = 0, Mul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            iNo = iNo / 10;
            continue;
        }

        Mul = Mul * iDigit;
        iNo = iNo / 10;
    }

    return Mul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    iRet = MulDigit(iValue);

    printf("\n Multiplication Of Digits In Given Number Is %d.",iRet);

    getch();
    return 0;
}
