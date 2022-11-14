#include<stdio.h>
#include<conio.h>

int Difference(int iNo)
{
    int iDigit = 0, ESum = 0, OSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            ESum += iDigit;
        }
        else
        {
            OSum += iDigit;
        }

        iNo = iNo / 10;
    }

    return ESum-OSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    iRet = Difference(iValue);

    printf("\n Difference Between Sum Of Even Digits And Sum Of Odd Digits In Given Number Is %d.",iRet);

    getch();
    return 0;
}
