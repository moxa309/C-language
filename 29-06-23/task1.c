#include<stdio.h>

int main(){
	
	int a;
	int *b;
	
	printf("Enter Value : ");
	scanf("%d",&a);
	
	b = &a;
	
	printf("Square is : %d",(*b)*(*b));
	
	return 0;
}
