// 題意思考：給定第一天入住的旅團人數(size)，該旅團會在飯店住滿size天，
//          並在該晚離開，下一組旅團於隔天早上入住，
//          人數比上一團旅團人數多一個，請問在第I天，住在飯店的旅團有幾人。

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
        // 當size比所求的特定天數還要多，表示該旅團尚未退房
        if(size >= day_ith)
        {
            printf("%d\n", size);
        }

        else
        {
            long long int sum = size;
            
            // 利用等差級數和求出特定日期的旅團人數
            while(sum < day_ith)
            {
                sum = sum + size;
                size = size + 1;
            }

            // 輸出結果前要先減一
            printf("%d\n", size - 1);
        }
    }

    system("PAUSE");
    return 0;
}