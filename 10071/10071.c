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
    scanf("%d", &case_num);

    for (int i = 0; i < case_num; i++)
    {
        scanf("%d %lf %d", &player, &probability, &win_ith);

        // 勝利機率為0
        if (probability == 0)
        {
            printf("0.0000\n");
        }

        // 勝利機率大於0
        else
        {
            // 失敗的機率
            double q = 1 - probability;

            // 印出結果
            printf("%.4f\n", pow(q, (win_ith - 1)) * probability / (1 - pow(q, player)));
        }
    }

    system("PAUSE");
    return 0;
}