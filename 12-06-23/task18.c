#include<stdio.h>

int main(){
	
	int r,c;
	
	for(r=5 ; r>=1 ; r--){
		
		for(c=1 ; c<=r ; c++){
			
		if(c%2==0){
			printf("1",c);
			
		}
		else
		{
			printf("0",c);
			
		}
		}
		printf("\n");
	}
	
	return 0;
}
