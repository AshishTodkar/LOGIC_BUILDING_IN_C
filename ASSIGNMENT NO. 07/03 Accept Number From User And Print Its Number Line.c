#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        printf("\n Invalid Input.");
        return;
    }

    for(i=-iNo;i<=iNo;i++)
    {
        printf("  %d  ",i);
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
