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
    while (scanf("%d", &num_dec))
    {
        // 輸入的數字為0跳出迴圈
        if(num_dec == 0)
        {
            break;
        }

        // 宣告字元陣列的index
        int index = 0;

        // 十進制轉換成二進制
        while (num_dec >= 2)
        {
            //判斷最後一位是1還是0，偶數是0，奇數是1
            if (num_dec % 2 == 0)
            {
                num_dec = num_dec / 2;
                num_bin[index] = '0';
            }
            else
            {
                num_dec = num_dec / 2;
                num_bin[index] = '1';
                parity++;
            }
            index++;
        }
        
        // 二進制的首位數字為1
        if(num_dec == 1)
        {
            num_bin[index] = '1';
            parity++;
        }

        // 二進制的首位數字為0
        else
            index--;
        
        // 印出結果
        printf("The parity of ");
        for(int i = index; i >= 0; i--)
        {
            printf("%c", num_bin[i]);
        }
        printf(" is %d (mod 2).\n", parity);

        // parity歸0，重新計算
        parity = 0;
    }

    system("PAUSE");
    return 0;
}