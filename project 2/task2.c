#include<stdio.h>

int main(){
	
	int a;
	
	printf("Enter the digit : ");
	scanf("%d",&a);
	
	a%2==0 ? printf("The digit is EVEN") : printf("The digit is ODD");
	
	return 0;
}
