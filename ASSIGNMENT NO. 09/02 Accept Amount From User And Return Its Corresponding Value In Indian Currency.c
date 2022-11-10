#include<stdio.h>
#include<conio.h>

int DollerTOINR(int iNo)
{
    return iNo * 80;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter A Number Of USD : ");
    scanf("%d",&iValue);

    iRet = DollerTOINR(iValue);

    printf("\n Value In INR Is : %d ",iRet);

    getch();
    return 0;
}
