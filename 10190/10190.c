// 題意思考：

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// 宣告第一組入住的旅團人數
int size = 0;

// 宣告題目詢問第幾天時(飯店有幾人)
long long int day_ith = 0;

int main()
{
    while (scanf("%d %lld", &size, &day_ith) != EOF)
    {

        long long int sum = size;

        // 利用等差級數和求出特定日期的旅團人數
        while (sum < day_ith)
        {
            size = size + 1;
            sum = sum + size;
        }

        printf("%d\n", size);
    }

    system("PAUSE");
    return 0;
}