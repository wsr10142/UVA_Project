// 題意思考：判斷一個長度為n的數列其公差數列是否為一個首項為1，公差為1的等比數列。

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)

int main()
{
    // 每筆數列的長度
    int quantity = 0;

    while (scanf("%d", &quantity) != EOF)
    {
        // 儲存切割後的數字陣列
        int num[3001] = {0};

        // 儲存公差數列出現次數
        int num_flag[3000] = {0};

        // 判斷是否是joly的flag
        int jolly_flag = 1;

        // 將輸入的數字轉成陣列儲存
        for (int i = 0; i < quantity; i++)
        {
            scanf("%d", &num[i]);
        }

        // 將index是公差的值做加一，統計出現次數
        for (int i = 0; i < quantity - 1; i++)
        {
            num_flag[abs(num[i + 1] - num[i])]++;
        }

        // 檢查公差陣列中是否每個數字都有出現過，且只出現過一次
        for (int i = 1; i < quantity; i++)
        {
            if (num_flag[i] == 0 || num_flag[i] > 1)
            {
                printf("Not jolly\n");
                jolly_flag = 0;
                break;
            }
        }

        // 假設flag是1，表示公差數列的數值為1到n-1
        if (jolly_flag == 1)
        {
            printf("Jolly\n");
        }
    }

    system("PAUSE");
    return 0;
}