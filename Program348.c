//  *   *   *   *

#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;       //auto

    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();     //Recursive call
    }
}

int main()
{
    DisplayR();

    return 0;
}