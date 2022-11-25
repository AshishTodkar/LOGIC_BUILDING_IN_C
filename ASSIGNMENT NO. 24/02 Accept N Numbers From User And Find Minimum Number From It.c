#include<stdio.h>
#include<conio.h>

int Minimum(int Arr[], int iLength)
{
    int i = 0, Min = 0;

    Min = Arr[i];

    for(i=0;i<iLength;i++)
    {
        if( Arr[i] < Min )
        {
            Min = Arr[i];
        }
    }

    return Min;
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

    iRet = Minimum(p, iSize);

    printf("\n\t Minimum Number Is %d.",iRet);

    free(p);

    getch();
    return 0;
}
