#include<stdio.h>

int main(){
	int i;
	int a = 2000;
	int b = 3000;
	
	printf("Enter value : ");
	scanf("%d",&i);
	
	do{
		
		if(i%4==0)
		printf("%d\n",i);
		i++;
	}while(i>=a && i<=b);
	
	return 0;
}
