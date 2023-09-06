// 題意思考：第一行輸入測資數目，每一行輸入包含國家與人名，國家只有一個單字，名字不一定，每一行輸入最多75個字元，
//          最後統計出每個國家有幾個人，將國家按照字母排序。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

// 宣告輸入筆數
int quantity = 0;

// 宣告儲存國家的二維陣列
char country[2000][75] = {0};

// 宣告儲存名字的一維陣列
char name[75] = {0};

// 宣告國家出現次數總和
int count = 1;

int main()
{
    scanf("%d", &quantity);

    // 將輸入的n行預處理，個別存入城市與名字字串
    for (int i = 0; i < quantity; i++)
    {
        // 先輸入國家，再輸入一個空格，因為scanf當遇到空格的時候，即認為字符串結束，如此只會存國家的字串
        scanf("%s", &country[i]);

        // gets()默認空格的輸入，除非輸入回車鍵，否則都是同一個字串，因為名字不重要，所以可以覆蓋就好
        gets(name);
    }

    // 將國家按照字母進行排序，使用strcmp()
    for (int i = 0; i < quantity - 1; i++)
    {
        for (int j = 0; j < quantity - 1 - i; j++)
        {
            if (strcmp(country[j], country[j + 1]) > 0)
            {
                char temp[75] = {0};
                strcpy(temp, country[j]);
                strcpy(country[j], country[j + 1]);
                strcpy(country[j + 1], temp);
            }
        }
    }

    // 統計國家出現次數並輸出
    for (int i = 0; i < quantity; i++)
    {

        // 比較下一個位置的國家，一樣的count加一
        if (strcmp(country[i], country[i + 1]) == 0)
        {
            count++;
        }
        // 不一樣就輸出結果
        else
        {
            printf("%s %d\n", country[i], count);
            count = 1;
        }
    }

    system("PAUSE");
    return 0;
}