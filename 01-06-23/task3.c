#include<stdio.h>

int main(){
	
	int a,b,c,d,e;
	
	printf("Enter Value A : ");
	scanf("%d",&a);
	
	printf("Enter Value B : ");
	scanf("%d",&b);
	
	printf("Enter Value C : ");
	scanf("%d",&c);
	
	printf("Enter Value D : ");
	scanf("%d",&d);
	
	printf("Enter Value E : ");
	scanf("%d",&e);
	
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("A is Min");
				}
				else{
					printf("E is Min");
				}
			}
			else{
			  if(d<e){
			  	printf("D is Min");
			  }	
			  else{
			  	printf("E is Min");
			  }
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("C is Min");
				}
				else{
					printf("E is Min");
				}
			}
			else{
				if(d<e){
				  printf("D is Min");	
				}
				else{
					printf("E is Min");
				}
			}
		}
	}
	else{
		if(b<c){
			if(b<d){
				if(b<e){
					printf("B is Min");
				}
				else{
					printf("E is Min");
				}
			}
			else{
			  if(d<e){
			  	printf("D is Min");
			  }	
			  else{
			  	printf("E is Min");
			  }
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("C is Min");
				}
				else{
					printf("E is Min");
				}
			}
			else{
				if(d<e){
				  printf("D is Min");	
				}
				else{
					printf("E is Min");
				}
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
