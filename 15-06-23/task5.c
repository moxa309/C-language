#include<stdio.h>

int main(){
	
	int i,a[10];
	
	for(i=0;i<10;i++){
		
		printf("Enter the elements of Array1 : ",i);
		scanf("%d",&a[i]);
	}
	
	int b[10];
	
	for(i=0;i<10;i++){
		
		printf("Enter the elements of Array2 : ",i);
		scanf("%d",&b[i]);
	}
	
	int c[10];
	
	printf("Elements of array after merge : ");
	
	for(i=0;i<10;i++){
		
		c[i] = a[i];
		c[i+10] = b[i];
	}
	
	
	for(i=0;i<20;i++){
		
		
		printf(" %d ",c[i]);
	}
	
	
	
	return 0;
}
