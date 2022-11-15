#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = '\0';

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=0,ch='A';i<iNo;i++,ch++)
    {
        printf("\t %c",ch);
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
