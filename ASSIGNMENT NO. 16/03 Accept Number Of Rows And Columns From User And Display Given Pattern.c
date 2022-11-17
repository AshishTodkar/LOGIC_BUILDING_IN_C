#include<stdio.h>
#include<conio.h>

void Pattern(int iNo1,int iNo2)
{
    int r = 0 , c = 0;
    char ch = '\0';

    for(r=1,ch='A';r<=iNo1;r++,ch++)
    {
        for(c=1;c<=iNo2;c++)
        {
            printf("\t %c",ch);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter A Number Of Rows : ");
    scanf("%d",&iValue1);

    printf("\n Enter A Number Of Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    getch();
    return 0;
}
