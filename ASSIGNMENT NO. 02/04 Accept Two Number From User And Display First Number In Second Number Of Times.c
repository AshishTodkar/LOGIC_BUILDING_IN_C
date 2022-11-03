#include<stdio.h>
#include<conio.h>

void Display(int iNo,int iFrequency)
{
    int No = 0;

    for(No=0;No<iFrequency;No++)
    {
        printf("\n %d",iNo);
    }
}

int main()
{
    int iValue = 0 , iCount = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    printf("\n Enter A Frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    getch();
    return 0;
}
