#include<stdio.h>
#include<conio.h>

int MultFact(int iNo)
{
    int iRet = 0,i = 0;

    for(i=1,iRet=1;i<iNo;i++)
    {
        if(iNo % i == 0)
        {
            iRet = iRet * i;
        }
    }

    return iRet;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("\n Multiplication Of Factors Of Given Number Is %d.",iRet);

    getch();
    return 0;
}
