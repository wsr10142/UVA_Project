// 題意思考：

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// 櫻桃數量
int size = 0;

// 放置座標位置，動態配置陣列大小
int pos_x = 0;
int pos_y = 0;

int main()
{
    // 輸入位置並存入array
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&pos_x[i]);
        scanf("%d",&pos_y[i]);
    }

    system("PAUSE");
    return 0;
}