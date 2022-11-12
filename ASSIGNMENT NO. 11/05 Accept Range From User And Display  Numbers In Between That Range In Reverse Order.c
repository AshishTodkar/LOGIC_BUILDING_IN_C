#include<stdio.h>
#include<conio.h>

void RangeReverse(int iNo1,int iNo2)
{
   int i=0;

   if(iNo1 >= iNo2)
   {
       printf("\n\t Invalid Range.");
   }

   for(i=iNo2;i>=iNo1;i--)
   {
        printf("\t %d",i);
   }
}

int main()
{
    int iValue1 = 0 ,iValue2 = 02;

    printf("\n\t Enter Starting Number : ");
    scanf("%d",&iValue1);

    printf("\n\t Enter Ending Number : ");
    scanf("%d",&iValue2);

    RangeReverse(iValue1,iValue2);

    getch();
    return 0;
}
