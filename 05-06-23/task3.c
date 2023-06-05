#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("Enter C : ");
	scanf("%d",&c);
	
	printf("Enter D : ");
	scanf("%d",&d);
	
	a>b ?
	 a>c ?
	  a>d ? 
	   printf("A is Max")
	    : printf("D is Max")
		 : c>d ? printf("C is Max") : printf("D is Max")
	:
		   b>c ?
		    b>d ?
			 printf("B is Max") :
			  printf("D is Max") :
			    c>d ? printf("C is Max") : printf("D is Max");
	
	
	return 0;
}
