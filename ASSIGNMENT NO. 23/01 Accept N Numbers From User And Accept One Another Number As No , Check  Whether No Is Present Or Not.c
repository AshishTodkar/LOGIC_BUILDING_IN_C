#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef  int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i=0;i<iLength;i++)
    {
        if( Arr[i] == iNo )
        {
           return 1;
        }
    }
}

int main()
{
    int  *p = NULL, iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    BOOL bRet = FALSE;

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

    bRet = Check(p, iSize, iValue);

    if( bRet == TRUE )
    {
        printf("\n\t Number Is Present.");
    }
    else
    {
        printf("\n\t Number Is Absent.");
    }

    free(p);

    getch();
    return 0;
}
