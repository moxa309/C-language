#include<stdio.h>

int main(){
	
	int n,i;
	
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		
		printf("Enter the Value of Array1 : ");
		scanf("%d",&a[i]);
	}
	
	int b[n];
	
	for(i=0;i<n;i++){
		
		printf("Enter the Value of Array2 : ");
		scanf("%d",&b[i]);
	}
	
	int c[n];
	
		for(i=0;i<n;i++){
			
			c[i] = a[i] + b[i];
		}
	
	printf("Sum of two array is : \n");
	
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
		
	}
	
	
	
	return 0;
}
