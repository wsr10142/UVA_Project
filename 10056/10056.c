// 題意思考：給定玩家數量、勝利機率、想要知道哪位玩家的獲勝機率。
//          在N個人中，第I個人贏的機率是多少，不能確定會在第幾個回合中獲勝

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)

// 宣告case數量
int case_num = 0;

// 宣告玩家數量
int player = 0;

// 宣告贏的機率
double probability = 0;

// 宣告是第幾位獲勝
int win_ith = 0;

int main()
{
    scanf("%d", &case_num);

    for (int i = 0; i < case_num; i++)
    {
        scanf("%d %f %d", &player, &probability, win_ith);

        // 勝利機率為0
        if (p == 0)
        {
            printf("0.0000\n");
        }

        // 勝利機率大於0
        else
        {
            // 失敗的機率
            double q = 1 - probability;
            // q^[(r-1)*n] * q^(i-1) * p
            // 印出結果
            printf("%.4f\n", pow());
        }
    }

    system("PAUSE");
    return 0;
}