#include<stdio.h>

int main(){
	
	int a = 30;
	int b = 40;
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("A : %d\n",a);
	printf("B : %d",b);
	
	
	return 0;
}
