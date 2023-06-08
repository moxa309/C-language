#include<stdio.h>

int main(){
	
	int i=1;
	int n,sum=0;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	while(i<=n){
		
		sum = sum + i;
		i++;
	}
	printf("Sum : %d",sum);
	
	return 0;
}
