#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("Enter C : ");
	scanf("%d",&c);
	
	a>b ? a>c ? printf("A is Max") : printf("C is Max") ? b>c : printf("B is Max") : printf("C is Max");
	
	return 0;
}
