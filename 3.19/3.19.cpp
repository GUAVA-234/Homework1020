#include<stdio.h>
float principal,rate=0;
int days;

int main()
{
	do{
		printf("Enter loan principal (-1 to end) : ");
		scanf("%f",&principal);
		if(principal!=-1)
		{
		printf("Enter interest rate : ");
		scanf("%f",&rate);
		printf("Enter term of the loan in days  : ");
		scanf("%d",&days);
		printf("The interest charge is $ %.2f\n",principal*rate*days/365);
		}
	}while(principal!=-1);
	
	
	
	return 0;
}
