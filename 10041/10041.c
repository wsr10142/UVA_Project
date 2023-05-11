#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)

int a[501] = {0};
int b[30000] = {0};

int main()
{
    int r = 0, s = 0, m = 0, sum = 0;
    scanf("%d", &m);
    while (m != 0)
    {
        scanf("%d", &r);
        for (int i = 1; i <= r; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 1; j < r; j++)
            {
                if (a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        for (int i = a[1]; i <= a[r]; i++)
        {
            for (int j = 1; j <= r; j++)
            {
                sum = sum + abs(i - a[j]);
            }
            b[i] = sum;
            sum = 0;
        }
        int min = b[a[1]];
        for (int i = a[1]; i <= a[r]; i++)
        {
            if (b[i] <= min)
            {
                min = b[i];
            }
        }
        printf("%d\n", min);
        m--;
    }

    system("PAUSE");
    return 0;
}