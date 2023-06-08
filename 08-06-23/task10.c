#include<stdio.h>

int main(){
	
	int n,mult = 1;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	do{
		
		printf("%d * %d = %d\n",n,mult,n*mult);
		mult++;
		
	}while(mult<=10);
	
	return 0;
}
