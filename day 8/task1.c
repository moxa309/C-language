#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	
	if(a<b){
		
		printf("A is minimum");
		
	}
	else{
		printf("A is maximum");
	}
	return 0;
}
