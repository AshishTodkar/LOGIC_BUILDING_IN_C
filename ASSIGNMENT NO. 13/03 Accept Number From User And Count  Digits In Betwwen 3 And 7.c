#include<stdio.h>
#include<conio.h>

int Count(int iNo)
{
    int iDigit = 0, Cnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
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

    iRet = Count(iValue);

    printf("\n Count Of Digits In Between 3 And 7 In Given Number Is %d.",iRet);

    getch();
    return 0;
}
