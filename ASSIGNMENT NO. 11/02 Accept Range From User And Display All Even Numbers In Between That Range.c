#include<stdio.h>
#include<conio.h>

void RangeDisplayEven(int iNo1,int iNo2)
{
   int i=0;

   if(iNo1 >= iNo2)
   {
       printf("\n\t Invalid Range.");
   }

   for(i=iNo1;i<=iNo2;i++)
   {
       if (i%2==0)
       {
            printf("\t %d",i);
       }
   }
}

int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("\n\t Enter Starting Number : ");
    scanf("%d",&iValue1);

    printf("\n\t Enter Ending Number : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    getch();
    return 0;
}
