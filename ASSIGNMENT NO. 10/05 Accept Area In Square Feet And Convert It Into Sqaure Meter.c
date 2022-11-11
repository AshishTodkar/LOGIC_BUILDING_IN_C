#include<stdio.h>
#include<conio.h>

double SquareMeter(int iNo)
{
    return iNo * 0.0929;
}

int main()
{
    int iValue = 0.0;
    double dRet = 0.0;

    printf("\n Enter Area In Square Feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("\n Area In Square Meter Is %lf.",dRet);

    getch();
    return 0;
}
