// 題意思考：

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
    scanf("%d %d", &speed, &time);

    area = speed * (2 * time);

    printf("%d\n", area);

    system("PAUSE");
    return 0;
}