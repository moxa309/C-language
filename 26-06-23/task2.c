#include<stdio.h>
#include<string.h>

void div(){
	
	int a;
	
	
	
	if(a%3==0 && a%5==0){
		printf("The number is divisible by both 3 and 5.");
	}
	else{
		printf("The number is not divisible by both 3 and 5.");
	}
}

int main(){
	
	int a;
	
	printf("Enter The Number : ");
	scanf("%d",&a);
	
	
	div();
	return 0;
}
