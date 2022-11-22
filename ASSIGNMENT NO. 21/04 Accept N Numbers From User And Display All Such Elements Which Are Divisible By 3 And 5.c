#include<stdio.h>
#include<conio.h>

void Display(int Arr[], int iLength)
{
    int i = 0;

    for(i=0;i<iLength;i++)
    {
        if( Arr[i] % 3 == 0 && Arr[i] % 5 == 0)
        {
            printf("\t %d",Arr[i]);
        }
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

    printf("\n\t Numbers Which Are Divisible By 3 And 5 : ");

    Display(p, iSize);

    free(p);

    getch();
    return 0;
}
