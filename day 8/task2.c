#include<stdio.h>

int main(){
	
	int a;
	
	printf("Enter the number : ");
	scanf("%d",&a);
	
	if(a>0){
		printf("Number is positive");
	}
	else if(a<0){
		printf("Number is negative");
	}
	else{
		printf("It is Neutral");
	}
	return 0;
}
