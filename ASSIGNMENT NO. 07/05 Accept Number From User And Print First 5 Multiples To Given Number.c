#include<stdio.h>
#include<conio.h>

void MultipleDisplay(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        printf("\n Invalid Input.");
        return;
    }

    for(i=1;i<=5;i++)
    {
        printf("  %d  ",i*iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    getch();
    return 0;
}
