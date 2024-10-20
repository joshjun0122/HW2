// work.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>

int main()
{
    int days;
    float interest,principal=0,rate;
    while (1) {
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);

        if (principal == -1)
            break;

        printf("Enter interest rate: ");
        scanf("%f", &rate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        interest = principal * rate * days / 365;

        printf("The interest charge is $ %.2f\n ", interest);
    }
    system("pause");
    return 0;
}
