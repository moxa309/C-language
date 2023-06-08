#include<stdio.h>

int main(){
	
	int n;
	int i=1;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	do{
		
		if(n%2 == 0)
	
			printf("%d\n",n);
			
		
			n--;
	
	}while(i<=n);
	
	return 0;
}
