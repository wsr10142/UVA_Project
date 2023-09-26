// 題意思考：判斷是否為11的倍數，奇數位的和與偶數位的和的差為0或11的倍數

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#pragma warning(sidable : 4996)

//宣告輸入的正整數
char num[1001]={0};

int main()
{
    //輸入一個正整數判斷是否為11的倍數，直到輸入0結束
    while (scanf("%s",&num))
    {
        //判斷是否輸入0
        if (num[0] == '0' && num[1] == '\0')
        {
            break;
        }

        //宣告偶數位與奇數位的和
        int sum_even=0;
        int sum_odd=0;
      
        //計算偶數位與奇數位的和
        for (int i = 0; i < strlen(num); i++)
        {
            if(i%2==0)
            {
                sum_odd=sum_odd+(num[i]-'0');
            }
            else
            {
                sum_even=sum_even+(num[i]-'0');
            }
        }
        
        //判斷和之差是否可以整除11
        if (abs(sum_even-sum_odd) % 11 == 0)
        {
            printf("%s is a multiple of 11.\n", num);
        }
        else
            printf("%s is not a multiple of 11.\n", num);
    }

    system("PAUSE");
    return 0;
}