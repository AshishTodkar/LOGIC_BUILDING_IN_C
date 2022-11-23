#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 2

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int i = 0;

    for(i=0;i<iLength;i++)
    {
        if( Arr[i] == 11 )
        {
            return 1;
        }
    }
}

int main()
{

    int  *p = NULL, iSize = 0, iCnt = 0;
    BOOL bRet = FALSE;

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

    bRet = Check(p, iSize);

    if( bRet == TRUE )
    {
        printf("\n\t 11 Is Present.");
    }
    else
    {
        printf("\n\t 11 Is Absent.");
    }

    free(p);

    getch();
    return 0;
}
