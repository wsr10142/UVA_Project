// 題意思考：判斷一個長度為n的數列其公差數列是否為一個首項為1，公差為1的等比數列。

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)

int main()
{   
    int quantity=0;
    int num[3001]={0};

    while(scanf("%d",&quantity)!=EOF)
    {
        for(int i=0;i<quantity;i++)
        {
            scanf("%d",&num[i]);
        }
    }
    for(int i=0;i<quantity;i++)
    {
        printf("%d ",num[i]);
    }

    system("PAUSE");
    return 0;
}   