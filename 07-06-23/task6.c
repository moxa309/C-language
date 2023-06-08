#include<stdio.h>

int main(){
	
	int n;
	int i=1;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	while(i<=n){
		
		if(n%2 == 0)
	
			printf("%d\n",n);
			
		
			n--;
	
	}
	
	return 0;
}
