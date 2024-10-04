#include<stdio.h>

void DisplayR(char *str)
{
    if(*str != '\0')
    {
        printf("%s\n", str);
        str++;
        DisplayR(str);      //Tail Recursion
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    DisplayR(Arr);

    return 0;
}