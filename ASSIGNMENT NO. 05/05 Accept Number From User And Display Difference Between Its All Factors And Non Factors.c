#include<stdio.h>
#include<conio.h>

int FactDiff(int iNo)
{
    int i = 0,iRet = 0,sFact = 0,sNonFact = 0;

    for(i=1;i<iNo;i++)
    {
        if(iNo % i == 0)
        {
            sFact = sFact + i;
        }
        else
        {
            sNonFact += i;
        }
    }

    iRet = sFact - sNonFact;

    return iRet;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("\n Difference Between All Factors And Non Factors Of Given Number Is %d.",iRet);

    getch();
    return 0;
}
