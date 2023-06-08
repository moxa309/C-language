#include<stdio.h>

int main(){
	
	int n,fact=1;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	do{
		
		fact = fact * n;
		n--;
		
	}while(n>0);
	printf("factorial is : %d",fact);
	return 0;
}
