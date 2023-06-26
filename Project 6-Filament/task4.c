#include<stdio.h>

void main(){
	
	char i;
	printf("enter value :");
	scanf("%c",&i);
	

		if(i>='a'  &&   i<='z'){
		  i-=32;
	}
	

		
	printf("%c",i);

}