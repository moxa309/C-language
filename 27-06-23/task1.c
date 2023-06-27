#include<stdio.h>

void sum(int a,int b){
	printf("Sum : %d\n\n",a+b);
}

void sub(int a,int b){
	printf("Subtraction : %d\n\n",a-b);
}

void mult(int a,int b){
	printf("Multiplication : %d\n\n",a*b);
}

void div(int a,int b){
	printf("Division : %d\n\n",a/b);
}

int main(){
	
	int a,b;
	char sign;
	
	while(1){

	printf("Enter the First value : ");
	scanf("%d",&a);
	
	printf("Enter the Second value : ");
	scanf("%d",&b);
	
	printf(" + , - , * , / \n\n");
	
	printf("Enter your Selection : ");
	scanf(" %c",&sign);
	
	switch(sign){
		
		case '+':
			sum(a,b);
			break;
			
		case '-':
		    sub(a,b);
			break;
			
	    case '*':
			mult(a,b);
			break;
			
		case '/':
		    div(a,b);
			break;	
	}
}
	
	return 0;
}
