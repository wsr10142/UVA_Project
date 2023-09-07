// 題意思考：計算交換次數，使用泡沫排序法

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// 宣告測資筆數
int quantity = o;

// 宣告每筆測資長度
int length = 0;

// 宣告儲存的數字陣列
int num[50] = {0};

// 宣告交換次數總和
int count = 0;

int main()
{
    scanf("%d", &quantity);
    for (int i = 0; i < quantity; i++)
    {
        scanf("%d", &length);

        // 將輸入的數字存入陣列
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &num[j]);
        }

        // 泡沫排序，並計算交換次數
        for (int m = 0; m < length - 1; m++)
        {
            for (int n = 0; n < length - m; n++)
            {
                if (num[n] > num[n + 1])
                {
                    int temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
        count = 0;
    }

    system("PAUSE");
    return 0;
}