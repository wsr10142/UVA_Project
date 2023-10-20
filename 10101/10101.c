// 題意思考：將輸入的數字轉換，類似換零錢，使用遞迴的方式。

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// 宣告輸入的大數
long long int num = 0;

// 宣告記錄目前的case數
int count = 0;

// 使用遞迴換算
void func(long long int num)
{
    if (num >= 10000000)
    {
        num = num / 10000000;
        func(num);
    }
    if (num >= 100000)
    {
        num = num / 100000;
        func(num);
    }
    if (num >= 1000)
    {
        num = num / 1000;
        func(num);
    }
    if (num >= 100)
    {
        num = num / 100;
        func(num);
    }
}

int main()
{
    while (scanf("%lld", &num) != EOF)
    {
        count++;
        printf("%d. ", count);
        if (num > 0)
        {
            func(num);
        }
        else
        {
            printf(" 0");
        }

        printf("\n");
    }

    return 0;
}