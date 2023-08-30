// 題意思考：輸入n，做迴圈(n為奇數時做n=3n+1;為偶數時做n=n/2;印出n;結束條件為n=1)，輸出n印出的次數。
//          現在要輸入兩個數字，最後印出的結果是這兩個數(包含本身)間總印出次數。

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// 宣告輸入的的兩個數字
int num_start = 0;
int num_end = 0;

// 執行3n+1的function
int func(int n)
{
    int count = 0;

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        count++;
    }

    // 要加上初始數字，所以加一才是總印出次數
    count++;

    return count;
}

int main()
{
    while (scanf("%d %d", &num_start, &num_end) != EOF)
    {
        // 定義最大值與最小值
        int min = num_start <= num_end ? num_start : num_end;
        int max = num_start > num_end ? num_start : num_end;

        // 宣告最大之總和
        int count_max = 0;

        if (min == max)
        {
            count_max = func(min);
        }
        else
        {
            // 當運算之數字與最大值不一樣時，結束迴圈
            for (int i = min; i <= max; i++)
            {
                // 求出最大總和
                count_max = func(i) > count_max ? func(i) : count_max;
            }
        }
        // 印出結果
        printf("%d %d %d\n", num_start, num_end, count_max);
    }

    system("PAUSE");
    return 0;
}