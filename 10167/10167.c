// 題意思考：

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// 櫻桃數量
int size = 0;

// 
long long int day_ith = 0;

int main()
{
    while (scanf("%d", &size) != 0)
    {

        long long int sum = size;

        // 
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