#include<stdio.h>
//4
// 4 + 3 + 2 + 1 = 10

int AdditionR(int No)
{
    static int iSum = 0;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        iSum = iSum + iCnt;
        iCnt++;
        AdditionR(No);
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d", &Value);

    iRet = AdditionR(Value);
    printf("Addition is : %d\n", iRet);

    return 0;
}