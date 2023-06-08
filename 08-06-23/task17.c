#include<stdio.h>

int main(){
	int i;
	int a;
	int b;
	
	printf("Enter value : ");
	scanf("%d",&i);
	
	for(a=2000,b=3000;i>=a && i<=b;i++){
		
		if(i%4==0)
		printf("%d\n",i);
		
	}
	
	return 0;
}
