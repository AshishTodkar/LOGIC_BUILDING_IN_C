#include<stdio.h>
#include<conio.h>

int Factorial(int iNo)
{
    int Fact = 0 , i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=iNo,Fact=1;i>0;Fact *= i,i--);

    return Fact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("\n\t Factorial Of Number Is %d.",iRet);

    getch();
    return 0;
}
