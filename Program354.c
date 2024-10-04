#include<stdio.h>
// 4
// 4 * 3 * 2 * 1  = 24

int FactorialR(int No)
{
    static int iSum = 1;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        iSum = iSum * iCnt;
        iCnt++;
        FactorialR(No);
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d", &Value);

    iRet = FactorialR(Value);
    printf("Factorial is : %d\n", iRet);

    return 0;
}