// 題意思考：給定cola初始數量，每三個空瓶可以再換一瓶cola，
//         可以先跟別人借空瓶，最後要可以歸還，最多可以喝幾瓶。

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// 宣告cola初始數量
int cola = 0;

int main()
{
    while (scanf("%d", &cola) != EOF)
    {
        // 每換一次瓶子，就會減少兩個空瓶子，實際可以喝的cola多一瓶，
        // 所以總瓶數為cola數加上換的次數，total = cola + cola / 2
        // 而因為可以借瓶子，所以可以不用考慮不夠的情況，total = cola * 3 / 2
        printf("%d\n", cola * 3 / 2);
    }

    system("PAUSE");
    return 0;
}