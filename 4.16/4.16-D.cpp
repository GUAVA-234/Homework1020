#include <stdio.h>


int main() {
for (int i=0;i<10;i++)
{
	for(int o=11;o>i;o--)
	{
	printf(" ");	
	}
		for(int o=0;o<i+1;o++)
	{
	printf("*");	
	}
	printf("\n");
}
    return 0;
}
