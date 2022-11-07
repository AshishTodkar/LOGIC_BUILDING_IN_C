#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(iNo)
{
    if(iNo > 100)
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

    printf("\n\t Please Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("\n\t Given Number Is Greater Than 100.");
    }
    else
    {
        printf("\n\t Given Number Is Smaller Than 100.");
    }

    getch();
    return 0;
}
