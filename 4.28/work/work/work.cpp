// work.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>

int main()
{
    double conmissworker, manager, hourworker, pieceworker,hours, pieceitem, piecemoney;
    int choice=0;

    while (1) {
        
		printf("Enter employee's pay code(1,2,3,4) or -1(quit): ");
		scanf("%d", &choice);
				
        if (choice == -1)
            break;

        switch (choice){
            case  1:
                printf("Enter manager's weekly salary: ");
                scanf("%lf", &manager);
                printf("Manager's weekly pay: $%.2lf\n", manager);
                break;
            case 2:
                printf("Enter hourworker's weekly salary: ");
                scanf("%lf", &hourworker);
                printf("Enter hours worked: ");
                scanf("%lf", &hours);
                if (hours <= 40.0)
                    printf("hourworker's weekly pay: $%.2lf\n", hourworker);
                else{
                    hourworker = hourworker * 1.5;
                    printf("hourworker's weekly pay: $%.2lf\n", hourworker);
                }
                break;
            case 3:
                printf("Enter conmissworker's weekly salary: ");
                scanf("%lf", &conmissworker);
                conmissworker = 250 + 0.057 * conmissworker;
                printf("conmissworker's weekly pay: $%.2lf\n", conmissworker);
                break;
            case 4:
                printf("Enter the number of items: ");
                scanf("%lf", &pieceitem);
                printf("Enter the pay of money: ");
                scanf("%lf", &piecemoney);
                pieceworker = pieceworker * pieceitem;
                printf("pieceworker's weekly pay: $%.2lf\n", pieceworker);
                break;
            default:
                break;
        }
    }
    system("pause");
    return 0;
}
