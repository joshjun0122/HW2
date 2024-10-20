// work.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>

int main()
{
    float yourbenefits=0;
		
	while(1){
			
		printf("Enter sales in dollars (-1 to end ): ");
		scanf("%f", &yourbenefits);

		if(yourbenefits== -1)
			break;
				
		printf("Salary is $ %.2f\n", 200 + yourbenefits*0.09);
	}

	//system("pause");
    return 0;
}
