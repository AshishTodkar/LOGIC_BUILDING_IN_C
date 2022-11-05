#include<stdio.h>
#include<conio.h>

float IncomeTax(int iAmount)
{
    float Tax = 0.0,Tot_Tax = 0.0;

    if(iAmount < 500000)
    {
        Tax = 0;
    }
    if(iAmount >= 500000)
    {
        if(iAmount < 1000000)
        {
            Tax = ((iAmount-500000)*10)/100;
        }
        else
        {
            Tax = 50000;
        }

        Tot_Tax = Tot_Tax + Tax;
    }

    if(iAmount >= 1000000)
    {
        if(iAmount < 2000000)
        {
            Tax = ((iAmount-1000000)*20)/100;
        }
        else
        {
            Tax = 200000;
        }

        Tot_Tax = Tot_Tax + Tax;
    }

    if(iAmount >= 2000000)
    {
        Tax = ((iAmount-2000000)*30)/100;

        Tot_Tax = Tot_Tax + Tax;
    }

    return Tot_Tax;
}

int main()
{
    float Income = 0.0, Tot_Tax = 0.0;

    printf("\n Enter An Income : ");
    scanf("%f",&Income);

    Tot_Tax = IncomeTax(Income);

    printf("\n Tax Amount Is : %0.2f",Tot_Tax);

    getch();
    return 0;
}
