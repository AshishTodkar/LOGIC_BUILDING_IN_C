#include<stdio.h>
#include<conio.h>

void Digits(int Arr[], int iLength)
{
    int i = 0, Dig_Cnt = 0, Temp = 0;

    printf("\n\t Numbers That Have Three Digits In It : ");

    for(i=0;i<iLength;i++)
    {
        Dig_Cnt = 0;
        Temp = Arr[i];

        while( Temp > 0 )
        {
            if( Temp % 10 )
            {
                Dig_Cnt++;
            }

            Temp /= 10;
        }

        if( Dig_Cnt == 3 )
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

    Digits(p, iSize);

    free(p);

    getch();
    return 0;
}
