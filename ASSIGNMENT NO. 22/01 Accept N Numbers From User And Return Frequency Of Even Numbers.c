#include<stdio.h>
#include<conio.h>

int CntEven(int Arr[], int iLength)
{
    int i = 0, Cnt = 0;

    for(i=0;i<iLength;i++)
    {
        if( Arr[i] % 2 == 0 )
        {
            Cnt++;
        }
    }

    return Cnt;
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

    iRet = CntEven(p, iSize);

    printf("\n\t Count Of Even Numbers : %d.",iRet);

    free(p);

    getch();
    return 0;
}
