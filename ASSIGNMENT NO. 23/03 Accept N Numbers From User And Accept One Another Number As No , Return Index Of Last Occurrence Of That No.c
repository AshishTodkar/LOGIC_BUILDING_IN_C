#include<stdio.h>
#include<conio.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int i = 0, lastOcc = 0;

    for(i=0;i<iLength;i++)
    {
        if( Arr[i] == iNo )
        {
            lastOcc = i;
        }
    }

    return lastOcc;
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

    iRet = LastOcc(p, iSize, iValue);

    if( iRet == -1 )
    {
        printf("\n\t There Is No Such Number.");
    }
    else
    {
        printf("\n\t Last Occurrence Of Number Is At Index %d.",iRet);
    }

    free(p);

    getch();
    return 0;
}
