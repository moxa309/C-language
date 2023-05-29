#include<stdio.h>

int main(){
	
	int x;
	int y;
	int ans;
	
	
	
	printf("Enter the value of x :");
	scanf("%d",&x);
	
	printf("Enter the value of y :");
	scanf("%d",&y);
	
	ans = (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
	
	printf("The ans is : %d",ans);
	
	
	
	
	
	
	
	return 0;
}