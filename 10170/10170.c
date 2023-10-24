// 題意思考：給定第一天入住的旅團人數(size)，該旅團會在飯店住滿size天，
//          並在該晚離開，下一組旅團於隔天早上入住，
//          人數比上一團旅團人數多一個，請問在第I天，住在飯店的旅團有幾人。

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// 宣告第一組入住的旅團人數
int size = 0;

// 宣告題目詢問第幾天時(飯店有幾人)
int day_ith = 0;

int main()
{
    while (scanf("%d %d", &size, &day_ith) != EOF)
    {
        // 紀錄日期(旅團離開的日期)
        int sum = 0;

        // 計算某日的飯店旅團人數
        while (sum < day_ith)
        {
            sum = sum + size;
            size = size + 1;
        }

        // 印出結果
        printf("%d\n", size);
    }

    system("PAUSE");
    return 0;
}