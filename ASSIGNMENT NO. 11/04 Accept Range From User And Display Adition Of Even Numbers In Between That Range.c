#include<stdio.h>
#include<conio.h>

int RangeEvenSum(int iNo1,int iNo2)
{
   int i=0,Sum=0;

   if(iNo1 >= iNo2 || iNo1 < 0 || iNo2 < 0)
   {
       printf("\n\t Invalid Range.");
   }

   for(i=iNo1;i<=iNo2;i++)
   {
       if(i % 2 == 0)
       {
            Sum+=i;
       }
   }

   return Sum;
}

int main()
{
    int iValue1 = 0 ,iValue2 = 0, iRet = 0;

    printf("\n\t Enter Starting Number : ");
    scanf("%d",&iValue1);

    printf("\n\t Enter Ending Number : ");
    scanf("%d",&iValue2);

    iRet = RangeEvenSum(iValue1,iValue2);

    printf("\n\t Addition Is %d.",iRet);

    getch();
    return 0;
}
