#include<stdio.h>

int main(){
	
	int i,count;
	
	printf("Enter Value : ");
	scanf("%d",&i);
	
	while(i != 0){
		i = i / 10;
		count++;
		
	}
	printf(" Number of digits in this number are : %d",count);
	
	return 0;
}
