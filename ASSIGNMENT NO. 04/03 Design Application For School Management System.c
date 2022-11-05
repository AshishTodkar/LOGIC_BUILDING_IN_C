#include<stdio.h>
#include<conio.h>

int SchoolFees(int iStandard)
{
    int Fees = 0;

    if(iStandard == 1)
    {
        Fees = 8900;
    }
    else if(iStandard == 2)
    {
       Fees = 12790;
    }

    else if(iStandard == 3)
    {
       Fees = 21000;
    }
    else if(iStandard == 4)
    {
       Fees = 23450;
    }
    else
    {
        printf("\n Wrong Input.");
    }

    return Fees;
}

int main()
{
    int iStandard = 0,Fees = 0;

    printf("\n Enter Standard : ");
    scanf("%d",&iStandard);

    Fees = SchoolFees(iStandard);

    printf("\n Fees Of Given Standard Is %d.",Fees);

    getch();
    return 0;
}
