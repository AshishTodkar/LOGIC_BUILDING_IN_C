#include<stdio.h>
#include<conio.h>

int TouristBill(int iKilometer)
{
    int Rent = 0;

    if(iKilometer < 100)
    {
        Rent = iKilometer * 25;
    }
    else
    {
       Rent = iKilometer * 15;
    }

    return Rent;
}

int main()
{
    int iKilometer = 0,Rent = 0;

    printf("\n Enter Kilometers : ");
    scanf("%d",&iKilometer);

    Rent = TouristBill(iKilometer);

    printf("\n Rent For Given Kilometers Is %d.",Rent);

    getch();
    return 0;
}
