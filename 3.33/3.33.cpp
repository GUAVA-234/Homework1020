#include<stdio.h>
int i=0;
int main ()
{
	printf("Enter the number of layers : ");
scanf("%d",&i);
for(int o=0;o<i;o++)
{
	for(int l=0;l<12;l++)
	{
		if(o!=0&&o!=i-1&&l!=0&&l!=11)
		{
			printf(" ");
		}
	else printf("*");
	}
	printf("\n");
}

return 0;	
}
