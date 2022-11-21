#include<stdio.h>
#include<conio.h>

void Pattern(int Cnt)
{
    int r = 0 , c = 0;

    for(r=1;r<=Cnt;r++)
    {
        for(c=1;c<=Cnt;c++)
        {
            if(r + c == Cnt + 1 || r == 1 || r == Cnt || c == Cnt || c == 1)
            {
                printf("\t *");
            }
            else
            {
                printf("\t  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Count Of Rows And Columns : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}
