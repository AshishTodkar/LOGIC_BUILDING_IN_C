#include<stdio.h>
#include<conio.h>

void Display(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;

    for(i=0;i<iLength;i++)
    {
        if( Arr[i] >= iStart && Arr[i] <= iEnd )
        {
            printf("\t %d",Arr[i]);
        }
    }
}

int main()
{
    int  *p = NULL, iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;

    printf("\n\t Enter Number Of Elements : ");
    scanf("%d",&iSize);

    printf("\n\t Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("\n\t Enter Starting Point : ");
    scanf("%d",&iValue2);

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

    printf("\n\t Numbers That In The Given Range Is : ");

    Display(p, iSize, iValue1, iValue2);

    free(p);

    getch();
    return 0;
}
