#include<stdio.h>

int main(){
	
	int n,mult;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	for(mult=1;mult<=10;mult++){
		
		printf("%d * %d = %d\n",n,mult,n*mult);
	
		
	}
	
	return 0;
}
