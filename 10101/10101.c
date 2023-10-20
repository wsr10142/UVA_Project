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
    // 10000000為kuti
    if (num >= 10000000)
    {
        // 如果超過10000000，則需要繼續呼叫func計算
        func(num / 10000000);

        // 單位計數不為0，才要印出單位
        if (num / 10000000 > 0)
        {
            printf(" kuti");
        }
        num = num % 10000000;
    }
    // 100000為lakh
    if (num >= 100000)
    {
        // 如果超過100000，則需要繼續呼叫func計算
        func(num / 100000);

        // 單位計數不為0，才要印出單位
        if (num / 100000 > 0)
        {
            printf(" lakh");
        }
        num = num % 100000;
    }
    // 1000為hajar
    if (num >= 1000)
    {
        // 如果超過1000，則需要繼續呼叫func計算
        func(num / 1000);

        // 單位計數不為0，才要印出單位
        if (num / 1000 > 0)
        {
            printf(" hajar");
        }
        num = num % 1000;
    }
    // 100為shata
    if (num >= 100)
    {
        // 如果超過100，則需要繼續呼叫func計算
        func(num / 100);

        // 單位計數不為0，才要印出單位
        if (num / 100 > 0)
        {
            printf(" shata");
        }
        num = num % 100;
    }
    // 小於100，印出單位計數
    if (num > 0)
    {
        printf(" %d", num);
    }
}

int main()
{
    while (scanf("%lld", &num) != EOF)
    {
        count++;

        // 印出題號，格式要佔4位元
        printf("%4d.", count);

        // 輸入數字不為0，才進行遞迴呼叫
        if (num > 0)
        {
            func(num);
        }

        // 若為0，則直接印出
        else
        {
            printf(" 0");
        }

        // 每道題目結束都要換行
        printf("\n");
    }

    system("PAUSE");
    return 0;
}