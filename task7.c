#include<stdio.h>

int main(){
	
	int x;
	int y;
	int z;
	int ans;
	
	
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	printf("Enter the value of z : ");
	scanf("%d",&z);
	
	ans = (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	
	printf("The ans is : %d",ans);
	
	
	
	
	
	
	
	return 0;
}