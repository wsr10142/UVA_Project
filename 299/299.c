#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main()
{
    int n = 0, l = 0, s = 0;
    int num[50] = {0};
    scanf("%d", &n);
    while (n != 0)
    {
        scanf("%d", &l);
        for (int i = 0; i < l; i++)
        {
            scanf("%d", &num[i]);
        }
        for (int i = 0; i < 50; i++)
        {
            for (int j = 0; j < l - 1; j++)
            {
                if (num[j] > num[j + 1])
                {
                    int flag = num[j + 1];
                    num[j + 1] = num[j];
                    num[j] = flag;
                    s++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", s);
        s = 0;
        n--;
    }

    system("PAUSE");
    return 0;
}