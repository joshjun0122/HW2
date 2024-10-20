// work.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>

int main()
{   
    int count=0;
    //(A)
    for (int i = 0;i < 10;i++) {
        count = count + 1;
        for (int j = 0;j <count;j++) {
                printf("*");
        }
        printf("\n");
    }

    //(B)
    count = 10;
    for (int i = 0;i < 10;i++) {
        for (int j = 0;j < count;j++) {
            printf("*");
        }
        count = count - 1;
        printf("\n");
    }

    //(C)
    count = 0;
    for (int i = 0;i < 10;i++) {
        for (int j = 0;j < 10;j++) {
            if(count > j)
                printf(" ");
            else
                printf("*");
        }
        count = count + 1;
        printf("\n");
    }
    
    //(D)
    count = 9;
    for (int i = 0;i < 10;i++) {
        for (int j = 0;j < 10;j++) {
            if (count > j)
                printf(" ");
            else
                printf("*");
        }
        count = count - 1;
        printf("\n");
    }

    system("pause");
    return 0;
}
