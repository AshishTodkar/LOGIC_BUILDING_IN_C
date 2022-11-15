#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=1;i<=iNo;i++)
    {
        printf("\t %d \t*",i);
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}
