#include<stdio.h>
#include<conio.h>

double FhToCs(float fTemp)
{
    return (fTemp-32)*5/9;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\n Enter A Temperature In Fahrenhiet : ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("\n Temperature In Celcius Is %lf.",dRet);

    getch();
    return 0;
}
