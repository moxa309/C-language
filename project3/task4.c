#include<stdio.h>

int main(){
	
	int num,fd,ld,sum;
	
	printf("Enter The Number : ");
	scanf("%d",&num);
	
	fd = num;
	
	while(fd>=10){
		fd = fd/10;
	}
	
	ld = num%10;
	
	sum = fd + ld;
	
	printf("Sum of first and last digits : %d",sum);
	
	return 0;
}
