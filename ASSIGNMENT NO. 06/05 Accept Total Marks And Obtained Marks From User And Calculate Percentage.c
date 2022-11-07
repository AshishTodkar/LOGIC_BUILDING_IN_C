#include<stdio.h>
#include<conio.h>

float Percentage(iNo1,iNo2)
{
    float Per = 0.0;

    if(iNo1 < iNo2 || iNo1 <= 0 || iNo2 <= 0)
    {
       return -1;
    }

    Per = ((float)iNo2/iNo1) * 100;

    return Per;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    float fRet = 0;

    printf("\n\t Please Total Marks : ");
    scanf("%d",&iValue1);

    printf("\n\t Please Obtained Marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    if(fRet == -1)
    {
        printf("\n\t Invalid Input.");
    }
    else
    {
        printf("\n\t Percentage Is %0.2f.",fRet);
    }

    getch();
    return 0;
}
