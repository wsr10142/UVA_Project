// 題意思考：兩數相差之絕對值

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(sidable : 4996)

long long int num1, num2 = 0;

int main()
{
    while (scanf("%lld %lld", &num1, &num2) != EOF)
    {
        printf("%lld\n", abs(num2 - num1));
    }

    system("PAUSE");
    return 0;
}