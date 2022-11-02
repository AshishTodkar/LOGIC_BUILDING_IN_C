#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("\n Given Number %d Is Divisible By 5.",iValue);
    }
    else
    {
        printf("\n Given Number %d Is Not Divisible By 5.",iValue);
    }

    getch();
    return 0;
}
