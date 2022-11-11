#include<stdio.h>
#include<conio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;

    return PI*fRadius*fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\n Enter A Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("\n Area Of Circle Is %lf.",dRet);

    getch();
    return 0;
}
