#include<stdio.h>

int main(){
	
	int n,fact;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	for(fact=1;n>0;n--){
		
		fact = fact * n;
	
		
	}
	printf("factorial is : %d",fact);
	return 0;
}
