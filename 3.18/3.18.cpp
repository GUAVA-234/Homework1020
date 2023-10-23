#include<stdio.h>
float i=0;
int main()
{
do
{
	printf("Enter sales in dollars (-1 to end):");
	scanf("%f",&i);
	if(i!=-1)printf("Salary is : %.2f\n",200+i*0.09);
}while(i!=-1);
return 0;	
}
