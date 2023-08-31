// 題意思考：求到各點的最小距離和，輸入的測資不一定按照大小，先排序縮短執行時間，中位數到各點距離總和會最小

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)

// 宣告測資筆數
int test_num = 0;

int main()
{
    scanf("%d", &test_num);

    while (test_num != 0)
    {
        // 宣告關係數量、街道編號、中位數位置、中位數、距離總和
        int relatives_num = 0, street_num = 0, mid_pos, mid_num, sum = 0;
        // 宣告鄰居位置的陣列
        int street[500] = {0};

        scanf("%d", &relatives_num);

        // 存入鄰居位置的陣列
        for (int i = 0; i < relatives_num; i++)
        {
            scanf("%d", &street[i]);
        }

        // 排序資料(泡沫排序法)
        for (int i = 0; i < relatives_num; i++)
        {
            for (int j = 1; j < relatives_num - i; j++)
            {
                if (street[j - 1] > street[j])
                {
                    int temp = street[j];
                    street[j] = street[j - 1];
                    street[j - 1] = temp;
                }
            }
        }

        // 求中位數位置
        mid_pos = relatives_num / 2;

        // 總關係數為偶數
        if (relatives_num % 2 == 0)
        {
            mid_num = (street[mid_pos] + street[mid_pos - 1]) / 2;
        }
        // 總關係數為奇數
        else
        {
            mid_num = street[mid_pos];
        }

        // 計算距離總和
        for (int i = 0; i < relatives_num; i++)
        {
            sum = sum + abs(mid_num - street[i]);
        }

        printf("%d\n", sum);

        test_num--;
    }

    system("PAUSE");
    return 0;
}