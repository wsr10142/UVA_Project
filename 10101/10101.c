// 題意思考：將輸入的數字轉換成文本，有一點像是換零錢。

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)

int main()
{
    long long int num = 0;
    int count = 0;
    while (scanf("%lld", &num) != EOF)
    {
        int lakh[2], hajar[2], shata[2] = {0};
        int a, b = 0;
        int flag = 0;
        count++;
        a = num % 100;
        num = num - a;
        if (num == 0)
        {
            printf("%4d. %d\n", count, a);
            flag = 1;
        }
        shata[0] = num % 1000;
        num = num - shata[0];
        shata[0] = shata[0] / 100;
        if (num == 0 && flag == 0)
        {
            if (a == 0)
            {
                printf("%4d. %d shata", count, shata[0]);
                printf("\n");
                flag = 1;
            }
            else if (a != 0)
            {
                printf("%4d. %d shata %d", count, shata[0], a);
                printf("\n");
                flag = 1;
            }
        }
        hajar[0] = num % 100000;
        num = num - hajar[0];
        hajar[0] = hajar[0] / 1000;
        if (num == 0 && flag == 0)
        {
            printf("%4d. %d hajar", count, hajar[0]);
            if (shata[0] != 0)
            {
                printf(" %d shata", shata[0]);
            }
            if (a != 0)
            {
                printf(" %d", a);
            }
            printf("\n");
            flag = 1;
        }
        lakh[0] = num % 10000000;
        num = num - lakh[0];
        lakh[0] = lakh[0] / 100000;
        if (num == 0 && flag == 0)
        {
            printf("%4d. %d lakh", count, lakh[0]);
            if (hajar[0] != 0)
            {
                printf(" %d hajar", hajar[0]);
            }
            if (shata[0] != 0)
            {
                printf(" %d shata", shata[0]);
            }
            if (a != 0)
            {
                printf(" %d", a);
            }
            printf("\n");
            flag = 1;
        }
        num = num / 10000000;
        if (num != 0 && num < 100)
        {
            printf("%4d. %lld kuti", count, num);
            if (lakh[0] != 0)
            {
                printf(" %d lakh", lakh[0]);
            }
            if (hajar[0] != 0)
            {
                printf(" %d hajar", hajar[0]);
            }
            if (shata[0] != 0)
            {
                printf(" %d shata", shata[0]);
            }
            if (a != 0)
            {
                printf(" %d", a);
            }
            printf("\n");
        }
        if (num >= 100 && num < 1000)
        {
            b = num % 100;
            num = num - b;
            num = num / 100;
            printf("%4d. %lld shata", count, num);
            if (b != 0)
            {
                printf(" %d kuti", b);
            }
            if (b == 0)
            {
                printf(" kuti");
            }
            if (lakh[0] != 0)
            {
                printf(" %d lakh", lakh[0]);
            }
            if (hajar[0] != 0)
            {
                printf(" %d hajar", hajar[0]);
            }
            if (shata[0] != 0)
            {
                printf(" %d shata", shata[0]);
            }
            if (a != 0)
            {
                printf(" %d", a);
            }
            printf("\n");
        }
        if (num >= 1000 && num < 100000)
        {
            b = num % 100;
            num = num - b;
            shata[1] = num % 1000;
            num = num - shata[1];
            shata[1] = shata[1] / 100;
            num = num / 1000;
            printf("%4d. %lld hajar", count, num);
            if (shata[1] != 0)
            {
                printf(" %d shata", shata[1]);
            }
            if (b != 0)
            {
                printf(" %d kuti", b);
            }
            if (b == 0)
            {
                printf(" kuti");
            }
            if (lakh[0] != 0)
            {
                printf(" %d lakh", lakh[0]);
            }
            if (hajar[0] != 0)
            {
                printf(" %d hajar", hajar[0]);
            }
            if (shata[0] != 0)
            {
                printf(" %d shata", shata[0]);
            }
            if (a != 0)
            {
                printf(" %d", a);
            }
            printf("\n");
        }
        if (num >= 100000)
        {
            b = num % 100;
            num = num - b;
            shata[1] = num % 1000;
            num = num - shata[1];
            shata[1] = shata[1] / 100;
            hajar[1] = num % 100000;
            num = num - hajar[1];
            hajar[1] = hajar[1] / 1000;
            num = num / 100000;
            if (num >= 100)
            {
                lakh[1] = num % 100;
                num = num - lakh[1];
                num = num / 100;
                printf("%4d. %lld kuti", count, num);
                if (lakh[1] != 0)
                {
                    printf(" %d lakh", lakh[1]);
                }
                if (hajar[1] != 0)
                {
                    printf(" %d hajar", hajar[1]);
                }
                if (shata[1] != 0)
                {
                    printf(" %d shata", shata[1]);
                }
                if (b != 0)
                {
                    printf(" %d kuti", b);
                }
                if (b == 0)
                {
                    printf(" kuti");
                }
                if (lakh[0] != 0)
                {
                    printf(" %d lakh", lakh[0]);
                }
                if (hajar[0] != 0)
                {
                    printf(" %d hajar", hajar[0]);
                }
                if (shata[0] != 0)
                {
                    printf(" %d shata", shata[0]);
                }
                if (a != 0)
                {
                    printf(" %d", a);
                }
                printf("\n");
                flag = 1;
            }
            if (flag == 0)
            {
                printf("%4d. %lld lakh", count, num);
                if (hajar[1] != 0)
                {
                    printf(" %d hajar", hajar[1]);
                }
                if (shata[1] != 0)
                {
                    printf(" %d shata", shata[1]);
                }
                if (b != 0)
                {
                    printf(" %d kuti", b);
                }
                if (b == 0)
                {
                    printf(" kuti");
                }
                if (lakh[0] != 0)
                {
                    printf(" %d lakh", lakh[0]);
                }
                if (hajar[0] != 0)
                {
                    printf(" %d hajar", hajar[0]);
                }
                if (shata[0] != 0)
                {
                    printf(" %d shata", shata[0]);
                }
                if (a != 0)
                {
                    printf(" %d", a);
                }
                printf("\n");
            }
        }
    }

    system("PAUSE");
    return 0;
}