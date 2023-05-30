#include<stdio.h>

int main(){
	
	int a = 70;
	int b = 80;
	int c;
	
	c = a;
	a = b;
	b = c;
	
	printf("A : %d\n",a);
	printf("B : %d",b);
	
	return 0;
}
