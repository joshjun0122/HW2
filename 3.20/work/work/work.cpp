// work.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>

int main()
{
    int workhour=0;
    float hourmoney,yourmoney;

    while (1) {
			
		printf("Enter # of hours worked (-1 to end ): ");
		scanf("%d", &workhour);

		if(workhour == -1)
			break;
				
        printf("Enter hourly rae of the worker ($00.00): ");
        scanf("%f", &hourmoney);

        yourmoney = workhour * hourmoney;

        printf("Salary is $%.2f\n", yourmoney);
    } 
    system("pause");
    return 0;
}
