// 題意思考：兩數相加，計算進位次數，透過個別數字判斷，由個位數依序相加判斷是否進位。

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main()
{
    // 宣告加數與被加數
    int num1, num2 = 0;

    // 輸入兩數不為0
    while (scanf("%d %d", &num1, &num2))
    {
        // 宣告進位
        int carry = 0;
        // 宣告進位次數
        int carry_sum = 0;

        // 輸入兩數皆為0，結束迴圈
        if (num1 == 0 && num2 == 0)
        {
            break;
        }

        // 計算進位次數，將全部位元依序相加
        while (num1 != 0 || num2 != 0)
        {
            // num1個位數 + num2個位數 + carry，超過10將carry設成1
            if ((num1 % 10 + num2 % 10 + carry) >= 10)
            {
                carry_sum += 1;
                carry = 1;
            }
            // 沒有進位的話，carry設為0
            else
            {
                carry = 0;
            }

            num1 /= 10;
            num2 /= 10;
        }

        // 印出進位次數
        if (carry_sum != 0)
        {
            if (carry_sum == 1)
            {
                printf("1 carry operation.\n");
            }
            else
            {
                printf("%d carry operations.\n", carry_sum);
            }
        }
        else
        {
            printf("No carry operation.\n");
        }
    }

    system("PAUSE");
    return 0;
}