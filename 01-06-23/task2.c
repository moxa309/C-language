#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	printf("Enter Value A : ");
	scanf("%d",&a);
	
	printf("Enter Value B : ");
	scanf("%d",&b);
	
	printf("Enter Value C : ");
	scanf("%d",&c);
	
	printf("Enter Value D : ");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
		    if(a>d){
		    	printf("A is Max");
			}
			else{
				printf("D is Max");
			}
		}
		else{
			if(c>d){
				printf("C is Max");
			}
			else{
				printf("D is Max");
				}
			}
		}
		
		
	else{
	  if(b>c){
	  	if(b>d){
	  		printf("B is Max");
		  }
		  else{
		  	printf("D is Max");
		  }
	  }	
	  else{
	    if(c>d){
	    	printf("C is Max");
		}
		else{
			printf("D is Max");
		}
	  }
	}
	
	return 0;
}
