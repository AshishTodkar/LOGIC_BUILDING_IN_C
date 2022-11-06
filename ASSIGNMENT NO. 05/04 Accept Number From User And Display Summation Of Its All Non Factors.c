#include<stdio.h>
#include<conio.h>

int SumNonFact(int iNo)
{
    int i = 0,iRet = 0;

    for(i=1;i<iNo;i++)
    {
        if(iNo % i != 0)
        {
            iRet = iRet + i;
        }
    }

    return iRet;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("\n Summation Of All Non Factors Of Given Number Is %d.",iRet);

    getch();
    return 0;
}
