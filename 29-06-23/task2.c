#include<stdio.h>

int main(){
	
	int x,y,*a,*b,c;
	
	printf("Enter first Value : ");
	scanf("%d",&x);
	
	printf("Enter second Value : ");
	scanf("%d",&y);
	
	printf("Before swapping values are x=%d, y=%d\n",x,y);
	
	a = &x;
	b = &y;
	
	c = *b;
	*b = *a;
	*a = c;
	
	printf("After swapping values are : x=%d, y=%d",x,y);
	
	return 0;
}
