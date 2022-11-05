#include<stdio.h>
#include<conio.h>

float CalculateBill(int iAmount)
{
    float Dis = 0.0;

    if(iAmount < 500)
    {
        Dis = 0;
    }
    else if(iAmount <= 1500 && iAmount >= 500)
    {
        Dis = (iAmount*10)/100;
    }
    else
    {
        Dis = (iAmount*15)/100;
    }

    return Dis;
}

int main()
{
    float Amt = 0.0, Dis = 0.0;

    printf("\n Enter A Bill Amount : ");
    scanf("%f",&Amt);

    Dis = CalculateBill(Amt);

    printf("\n After Discounting Your Bill Amount Is : %0.2f",Amt-Dis);

    getch();
    return 0;
}
