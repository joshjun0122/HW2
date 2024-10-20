// work.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>

int main()
{
    int basticmoney[5] = {5000, 5000, 5000, 5000, 5000};

    //float rates100=0.1, rates105=0.15, rates110=0., rates115, rates120;

    printf("interest rates is  %.2f%: ", 0.1);
    basticmoney[0] = basticmoney[0] * (1 + 0.1) * 15;
    printf(" %d\n", basticmoney[0]);

    printf("interest rates is  %.3f%: ", 0.105);
    basticmoney[1] = basticmoney[1] * (1 + 0.105) * 15;
    printf("%d\n", basticmoney[1]);

    printf("interest rates is  %.2f%: ", 0.11);
    basticmoney[2] = basticmoney[2] * (1 + 0.11) * 15;
    printf(" %d\n", basticmoney[2]);

    printf("interest rates is  %.3f%: ", 0.115);
    basticmoney[3] = basticmoney[3] * (1 + 0.115) * 15;
    printf("%d\n", basticmoney[3]);

    printf("interest rates is  %.2f%: ", 0.12);
    basticmoney[4] = basticmoney[4] * (1 + 0.12) * 15;
    printf(" %d\n", basticmoney[4]);

    system("pause");
    return 0;
}
