#include<stdio.h>

int main(){
	
	char value;
	
	printf("Enter the value : ");
	scanf("%c",&value);
	
	if(value>='a' && value<='z'){
		printf("The value is character");
	}
	else if(value>='0' && value<='9'){
		printf("The value is a digit");
	}
	
	else{
		
		printf("The value is a special character");
	}
	
	return 0;
}
