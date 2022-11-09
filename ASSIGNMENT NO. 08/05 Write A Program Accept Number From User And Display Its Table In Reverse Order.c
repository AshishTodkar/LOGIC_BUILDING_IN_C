#include<stdio.h>
#include<conio.h>

void TableRev(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=10;i>0;printf("\t %d",iNo*i),i--);
}

int main()
{
    int iValue = 0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    getch();
    return 0;
}
