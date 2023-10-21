// 題意思考：給定天數、政黨數量、政黨罷工頻率，判斷政黨總罷工天數，星期五跟六不算

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// 宣告case數量
int case_num = 0;

// 宣告天數
int range = 0;

// 宣告政黨數量
int political = 0;

// 宣告每個政黨罷工頻率
int political_hartals[100] = {0};

// 宣告總罷工天數
int hartals = 0;

int main()
{
    scanf("%d", &case_num);

    for (int i = 0; i < case_num; i++)
    {
        scanf("%d", &range);
        scanf("%d", &political);

        // 將輸入的罷工頻率儲存到陣列中
        for (int j = 0; j < political; j++)
        {
            scanf("%d", &political_hartals[j]);
        }

        // 從第一天開始依序判斷是否罷工
        for (int k = 1; k < range + 1; k++)
        {
            // 該天不為星期五或星期六時
            if (k % 7 != 6 && k % 7 != 0)
            {
                // 判斷該天是否有政黨罷工，當加一後break，避免重複計算
                for (int m = 0; m < political; m++)
                {
                    if (k % political_hartals[m] == 0)
                    {
                        hartals++;
                        break;
                    }
                }
            }
        }

        // 印出結果
        printf("%d\n", hartals);

        // hartals歸零
        hartals = 0;
    }

    system("PAUSE");
    return 0;
}