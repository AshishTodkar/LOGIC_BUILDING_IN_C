#include<stdio.h>
#include<conio.h>

void RangeDisplay(int iNo1,int iNo2)
{
   int i=0;

   if(iNo1 >= iNo2)
   {
       printf("\n\t Invalid Range.");
   }

   for(i=iNo1;i<=iNo2;printf("\t %d",i),i++);
}

int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("\n\t Enter Starting Number : ");
    scanf("%d",&iValue1);

    printf("\n\t Enter Ending Number : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    getch();
    return 0;
}
