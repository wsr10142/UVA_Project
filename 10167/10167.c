// 題意思考：

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// 櫻桃數量
int size = 0;

int main()
{
    scanf("%d",&size);

    // 放置座標位置，配置陣列大小
    int pos_x[size] = {0};
    int pos_y[size] = {0};

    // 輸入位置並存入array
    for(int i = 0; i < 2 * size; i++)
    {
        scanf("%d",&pos_x[i]);
        scanf("%d",&pos_y[i]);
    }

    for(int i = 0;i < 2 * size; i++)
    {
        printf("%d %d\n",pos_x[i],pos_y[i]);
    }


    system("PAUSE");
    return 0;
}