#include<stdio.h>

void main(){
	
	char i;
	printf("enter value :");
	scanf("%c",&i);
	

		if(i>='A'  &&   i<='Z'){
		  i+=32;
	}
	

		
	printf("%c",i);

}