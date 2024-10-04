#include<stdio.h>
//4
// 4 + 3 + 2 + 1 = 10

int AdditionI(int No)
{
    int iSum = 0;
    int iCnt = 1;

    while(iCnt <= No)
    {
        iSum = iSum + iCnt;
        iCnt++;
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d", &Value);

    iRet = AdditionI(Value);
    printf("Addition is : %d\n", iRet);

    return 0;
}