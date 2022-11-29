#include<stdio.h>
#include<conio.h>

void DisplayASCII()
{
    int i = 0;

    for(i=0;i<=255;i++)
    {
        printf("\t %5d \t\t %5x \t\t %5o \t\t %5c \n",i,i,i,i);
    }
}
int main()
{
    printf("\n\n\t Decimal \t Hexadecimal \t   Octal     \t Character \n\n");

    DisplayASCII();

    getch();
    return 0;
}
