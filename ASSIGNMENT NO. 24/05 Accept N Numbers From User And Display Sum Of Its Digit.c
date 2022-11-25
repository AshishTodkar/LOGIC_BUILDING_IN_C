#include<stdio.h>
#include<conio.h>

void DisplaySum(int Arr[], int iLength)
{
    int i = 0, Dig_Sum = 0, Temp = 0;

    for(i=0;i<iLength;i++)
    {
        Dig_Sum = 0;
        Temp = Arr[i];

        while( Temp > 0 )
        {
            Dig_Sum += ( Temp % 10 );

            Temp /= 10;
        }

        printf("\n\t Sum Of Digit Of Number %d Is %d.",Arr[i],Dig_Sum);
    }
}

int main()
{
    int  *p = NULL, iSize = 0, iCnt = 0;

    printf("\n\t Enter Number Of Elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
         printf("\n\t Unable to allocate Memory. ");
         return -1;
    }

    printf("\n\t Enter %d Elements : \n",iSize);

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
         printf("\n\t Enter element %d : ",iCnt+1);
         scanf("%d",&p[iCnt]);
    }

    DisplaySum(p, iSize);

    free(p);

    getch();
    return 0;
}
