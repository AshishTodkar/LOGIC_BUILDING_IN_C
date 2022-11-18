#include<stdio.h>
#include<conio.h>

void Pattern(int iNo1,int iNo2)
{
    int r = 0 , c = 0, i = 0;

    for(r=1,i=1;r<=iNo1;r++)
    {
        for(c=1;c<=iNo2;c++)
        {
            if(i>9)
            {
                i=1;
            }
            printf("\t %d",i++);
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
