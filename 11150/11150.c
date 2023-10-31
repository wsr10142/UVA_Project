// 題意思考：給定cola初始數量，每三個空瓶可以再換一瓶cola，最多可以喝幾瓶。

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// 宣告cola初始數量
int cola = 0;

// 可借的瓶子
int empty = 0;

// 總共可以喝到的瓶數
int total = 0;

int main()
{
    while (scanf("%d", &cola) != EOF)
    {
        printf("%d\n",cola*3/2);
    }

    system("PAUSE");
    return 0;
}