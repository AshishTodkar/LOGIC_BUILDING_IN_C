#include<stdio.h>
#include<conio.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int i = 0, Cnt = 0;

    for(i=0;i<iLength;i++)
    {
        if( Arr[i] == iNo )
        {
            Cnt++;
        }
    }

    return Cnt;
}

int main()
{

    int  *p = NULL, iSize = 0, iRet = 0, iCnt = 0, iValue = 0;

    printf("\n\t Enter Number Of Elements : ");
    scanf("%d",&iSize);

    printf("\n\t Enter A Number : ");
    scanf("%d",&iValue);

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

    iRet = Frequency(p, iSize, iValue);

    printf("\n\t Frequency Of %d Is : %d.",iValue,iRet);

    free(p);

    getch();
    return 0;
}
