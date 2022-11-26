#include<stdio.h>
#include<conio.h>

void DisplaySchedule(char ch)
{
    if( ch == 'A' || ch == 'a' )
    {
        printf("\n\t Exam Timing Is 7 AM.");
    }
    else if( ch == 'B' || ch == 'b' )
    {
        printf("\n\t Exam Timing Is 8:30 AM.");
    }
    else if( ch == 'C' || ch =='c' )
    {
        printf("\n\t Exam Timing Is 9:20 AM.");
    }
    else if( ch == 'D' || ch == 'd' )
    {
        printf("\n\t Exam Timing Is 10:30 AM.");
    }
    else
    {
        printf("\n\t Invalid Division.");
    }
}

int main()
{
    char cValue = '\0';

    printf("\n\t Enter The Character : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    getch();
    return 0;
}
