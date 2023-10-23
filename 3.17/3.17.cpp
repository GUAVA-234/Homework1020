#include <stdio.h>

int main() {
    int accountNumber;
    double beginningBalance;
    double totalCharges;
    double totalCredits;
    double creditLimit;
do{
    printf("Enter account number(-1 to end) : ");
    scanf("%d", &accountNumber);
    if(accountNumber!=-1)
	{
    printf("Enter beginning balance : ");
    scanf("%lf", &beginningBalance);

    printf("Enter total Charges : ");
    scanf("%lf", &totalCharges);

    printf("Enter total Credits : ");
    scanf("%lf", &totalCredits);

    printf("Enter credit Limit : ");
    scanf("%lf", &creditLimit);

    double newBalance = beginningBalance + totalCharges - totalCredits;

    printf("\n Account : %d\n", accountNumber);
    printf("CreditLimit : %.2f\n", creditLimit);
    printf("Balance : %.2f\n", newBalance);

    if (newBalance > creditLimit) 
		{
        printf("Credit Limit Exceeded\n");
    	}
    }
}while(accountNumber!=-1);
    return 0;
}
