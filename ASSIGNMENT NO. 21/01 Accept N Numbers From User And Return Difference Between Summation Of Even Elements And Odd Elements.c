#include<stdio.h>
#include<conio.h>

int Difference(int Arr[], int iLength)
{
    int i = 0, sEven = 0, sOdd = 0;

    for(i=0;i<iLength;i++)
    {
        if( Arr[i] % 2 == 0)
        {
            sEven += Arr[i];
        }
        else
        {
            sOdd += Arr[i];
        }
    }

    return sEven - sOdd;
}

int main()
{
    int  *p = NULL, iSize = 0, iRet = 0, iCnt = 0;

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

    iRet = Difference(p, iSize);

    printf("\n\t Difference is %d.",iRet);

    free(p);

    getch();
    return 0;
}
