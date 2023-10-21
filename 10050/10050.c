// 題意思考：

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int case_num = 0;
int range = 0;
int political = 0;
int political_hartals[100] = {0};
int hartals = 0;

int main()
{
    scanf("%d", &case_num);

    for (int i = 0; i < case_num; i++)
    {
        scanf("%d", &range);
        scanf("%d", &political);

        for (int j = 0; j < political; j++)
        {
            scanf("%d", &political_hartals[j]);
        }

        for (int k = 1; k < range + 1; k++)
        {
            if (k % 7 != 6 && k % 7 != 0)
            {
                for (int m = 0; m < political; m++)
                {
                    if (k % political_hartals[m] == 0)
                    {
                        hartals++;
                        break;
                    }
                }
            }
        }

        printf("%d\n", hartals);
    }

    system("PAUSE");
    return 0;
}