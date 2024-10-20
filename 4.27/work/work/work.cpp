// work.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>

int main()
{
    int max_value =500;

    for (int a = 1; a <= max_value; a++) {
        for (int b = a; b <= max_value; b++) {  
            for (int c = b; c <= max_value; c++) { 
                if (a * a + b * b == c * c) {
                    printf("找到畢氏定理: a=%d, b=%d, c=%d\n", a, b, c);
                }
            }
        }
    }

    system("pause");
    return 0;
}
