// 題意思考：輸入一整數，輸出他的二進制表示法以及1的數量，當輸入0時，結束程式

#include <stdio.h>
#include <stdlib.h>
#pragma warning(sidable : 4996)

// 宣告輸入的數字
int num_dec = 0;

// 宣告儲存轉換後數字的字元陣列
char num_bin[100] = {0};

// 宣告數字以二進制表示法中1的數量
int parity = 0;

int main()
{
    // 輸入的數字不為0才處理
    while (scanf("%d", &num_dec) != 0)
    {
        int index = 0;

        // 十進制轉換成二進制
        while (num_dec < 2)
        {
            if (num_dec % 2 == 0)
            {
                num_dec = num_dec / 2;
                num_bin[index] = '1';
                parity++;
            }
            else
            {
                num_dec = num_dec / 2;
                num_bin[index] = '0';
            }
            index++;
        }

        printf("The parity of %s is %d (mod 2).\n", num_bin, parity);

        // num_bin[100] = {0};
        parity = 0;
    }

    system("PAUSE");
    return 0;
}