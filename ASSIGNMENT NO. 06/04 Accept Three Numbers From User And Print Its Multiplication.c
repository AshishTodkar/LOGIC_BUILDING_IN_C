#include<stdio.h>
#include<conio.h>

int Multiply(iNo1,iNo2,iNo3)
{
    int Mul = 0;

    if(iNo1 == 0)
    {
       Mul = iNo2 * iNo3;
    }
    else if(iNo2 == 0)
    {
        Mul = iNo1 * iNo3;
    }
    else if(iNo3 == 0)
    {
        Mul = iNo1 * iNo2;
    }
    else if(iNo1 == 0 && iNo2 == 0)
    {
        Mul = iNo3;
    }
    else if(iNo2 == 0 && iNo3 == 0)
    {
        Mul = iNo1;
    }
    else if(iNo1 == 0 && iNo3 == 0)
    {
        Mul = iNo2;
    }
    else if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        Mul = 0;
    }
    else
    {
        Mul = iNo1 * iNo2 * iNo3;
    }

    return Mul;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("\n\t Please Enter Three Numbers : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("\n\t Multiplication Of Given Three Numbers Is %d.",iRet);

    getch();
    return 0;
}
