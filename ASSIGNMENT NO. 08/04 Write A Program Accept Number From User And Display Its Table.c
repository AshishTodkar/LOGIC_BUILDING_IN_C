#include<stdio.h>
#include<conio.h>

void Table(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=1;i<=10;printf("\t %d",iNo*i),i++);
}

int main()
{
    int iValue = 0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&iValue);

    Table(iValue);

    getch();
    return 0;
}
