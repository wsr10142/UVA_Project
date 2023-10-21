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
    for (int i = 0; i < case_num; i++)
    {
        scanf("%d", &range);
        scanf("%d", &political);
        for (int j = 0; j < political; j++)
        {
            scanf("%d", political_hartals[j]);
        }
    }

    system("PAUSE");
    return 0;
}