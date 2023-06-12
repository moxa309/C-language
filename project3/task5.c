#include<stdio.h>

int main(){
	
	int num,originalnum,reverse=0,remainder;
	
	printf("Enter The Number : ");
	scanf("%d",&num);
	
	originalnum = num;
	
	while(num != 0){
		
		remainder = num%10;
		reverse = reverse * 10 + remainder;
		num = num/10;
	}
	
	printf("Reverse of the number is %d\n",reverse);
	
	if(originalnum == reverse){
		printf("The number is a palindrome\n");
	}
	else{
		printf("The number is not palindrome");
	}
	
	return 0;
}
