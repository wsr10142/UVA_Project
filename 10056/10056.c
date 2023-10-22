// 題意思考：給定測資數量、天數、政黨數量、政黨罷工頻率，判斷政黨總罷工天數，星期五跟六不算

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