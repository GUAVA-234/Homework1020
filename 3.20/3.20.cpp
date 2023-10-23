#include<stdio.h>
float  time=0;
float money=0;
int main ()
{
do{
	printf("Enter # of hours worked (-1 to end) : ");
	scanf("%f",&time);
	if(time!=-1){
	printf("Enter hourly rate of the worler ($00.00) : ");
	scanf("%f",&money);
	printf("Salary is %.2f \n",money*time);
 }
}while(time!=-1);
return 0;	
}


