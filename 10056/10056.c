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

            // 第一回合贏(表示I前面的人全輸)：q^(I-1) * p
            // 第二回合贏(表示第一輪大家全輸)：q^N * q^(I-1) * p
            // 第三回合贏(表示前兩輪大家全輸)：q^2N * q^(I-1) * p
            // .....
            // 第X+1回合贏(表示前X輪大家全輸)：q^XN * q^(I-1) * p
            // 因此，計算第I個人贏的機率為將所有可能相加
            // 利用等比級數和公式：首項為 q^(I-1) * p，公比為 q^N
            // 化簡為：q^(I-1) * p/(1-q^N)
            // 印出結果
            printf("%.4f\n", pow(q, (win_ith - 1)) * probability / (1 - pow(q, player)));
        }
    }

    system("PAUSE");
    return 0;
}