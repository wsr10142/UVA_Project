// 題意思考：判斷是否為11的倍數，奇數位的和與偶數位的和的差為0或11的倍數

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#pragma warning(sidable : 4996) s

int main()
{
    while (1)
    {
        char n[1001] = {0};
        int n1[1000] = {0};
        int s1 = 0;
        int s2 = 0;
        int sum = 0;
        scanf("%s", &n);
        if (n[0] == '0' && n[1] == '\0')
        {
            break;
        }
        int d = 1;
        for (int i = 0; i < strlen(n); i++)
        {
            n1[d] = n[i] - '0';
            d++;
        }
        for (int i = 1; i <= strlen(n); i++)
        {
            if (i % 2 == 1)
            {
                s1 = s1 + n1[i];
            }
            else if (i % 2 == 0)
            {
                s2 = s2 + n1[i];
            }
        }
        if (s1 >= s2)
        {
            sum = s1 - s2;
        }
        else
            sum = s2 - s1;
        if (sum % 11 == 0)
        {
            printf("%s is a multiple of 11.\n", n);
        }
        else
            printf("%s is not a multiple of 11.\n", n);
    }

    system("PAUSE");
    return 0;
}