#include<stdio.h>
#include<conio.h>

int KmToMeter(int iNo)
{
    return iNo*1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter A Distance : ");
    scanf("%d",&iValue);

    iRet = KmToMeter(iValue);

    printf("\n Distance In Meter Is %d.",iRet);

    getch();
    return 0;
}
