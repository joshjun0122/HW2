// work.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>

int main()
{
    //char add = '+' ;
    int width, length;
    int i, j;
    printf("Enter your width,length: ");
    scanf("%d,%d", &width, &length);

    for (i = 0; i < length; i++)
        if (i == 0 || i == 2) {
            for (j = 0; j < width; j++)
                    printf("+");
        printf("\n");
        }else {
            for (j = 0; j < width; j++) {
                if (j == 0 || j == width - 1)
                    printf("+");
                else
                    printf(" ");
            }
        printf("\n");
        }
    system("pause");
    return 0;
}
