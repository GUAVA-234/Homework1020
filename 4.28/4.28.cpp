#include <stdio.h>
int employee;
float weekpay,hour_salary,time,weekly_sales,item_price,number;
int main() 
{
	do{
	printf("Enter employecode 1.manager 2.hourly worker 3.commission worker 4. pieceworker (-1 to end)\n");
	scanf("%d",&employee);
	switch (employee)
	{
	case 1:
		printf("manager\nEnter manager Weekly salary : ");
		scanf("%f",&weekpay);
		printf("The salary %.2f\n",weekpay);
		break;
	case 2:
		printf("hourly worker\nEnter Hourly rate : ");
		scanf("%f",&hour_salary);
		printf("Enter working hours : ");
		scanf("%f",&time);
		if(time>40)
		{
			time =time-40;
			weekpay=40*hour_salary+time*hour_salary*1.5;
		}
		else weekpay=time*hour_salary;
		printf("The salary %.2f\n",weekpay);
		break;
	case 3:
		printf("commission worker\nEnter weekly sales : ");
		scanf("%f",&weekly_sales);
		weekpay=250+weekly_sales*0.057;
		printf("The salary %.2f\n",weekpay);
		break;
	case 4:
		printf("pieceworker\nEnter item price : ");
		scanf("%f",&item_price);
		printf("Enter  number of the stuffs : ");
		scanf("%f",&number);
		printf("The salary %.2f\n",item_price*number);
		break;	
	}
	}while(employee!=-1);

    return 0;
}
