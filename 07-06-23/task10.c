#include<stdio.h>

int main(){
	
	int n,mult = 1;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	while(mult<=10){
		
		printf("%d * %d = %d\n",n,mult,n*mult);
		mult++;
		
	}
	
	return 0;
}
