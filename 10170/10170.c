// 題意思考：給定速度及經過時間，計算經過兩倍時間的位移為何

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// 宣告速度
int speed = 0;

// 宣告經過的時間
int time = 0;

// 宣告位移
int area = 0;

int main()
{
    while (scanf("%d %d", &speed, &time) != EOF)
    {
        // 位移為速度乘上時間
        area = speed * (2 * time);

        printf("%d\n", area);
    }

    system("PAUSE");
    return 0;
}