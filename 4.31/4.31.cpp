#include <stdio.h>

int main(){
for(int i=1;i<=5;i++){
		for(int j=4;j>=i;j--){
			printf(" ");
		}
		for(int a=0;a<(i*2)-1;a++){
		  printf("*");
		}
		printf("\n");
}
for(int i=4;i>=0;i--){
		for(int j=4;j>=i;j--){
			printf(" ");
		}
		for(int a=0;a<(i*2)-1;a++){
		  printf("*");
		}
		printf("\n");
}	
	return 0;
}