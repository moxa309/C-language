#include<stdio.h>

int main(){
	
	char r,c,x='A';
	
	for(r='A' ; r<='E' ; r++){
		
		for(c='A' ; c<=r ; c++){
			
			printf("%c ",x);
			x++;
		}
		printf("\n");
	}
	
	return 0;
}
