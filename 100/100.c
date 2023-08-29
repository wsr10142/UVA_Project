// 題意思考：輸入n，做迴圈(n為奇數時做n=3n+1;為偶數時做n=n/2;印出n;結束條件為n=1)，印出n印出的次數。
//          現在要輸入兩個數字，最後印出的結果是這兩個數(包含本身)間總印出次數。

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int num_start = 0;
int num_end = 0;

int main()
{
    scanf("%d %d", &num_start, &num_end);
    int start = min(num_start, num_end);

    while (start != num_end)
    {
        while (start != 1)
        {
            if (start % 2 == 0)
            {
                start = start / 2;
            }
            else
            {
                start = 3 * start + 1;
            }
        }
    }

    system("PAUSE");
    return 0;
}