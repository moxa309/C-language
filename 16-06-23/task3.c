#include<stdio.h>

int main(){
	
	int i,j,m,n;
	int a[10][10],sum=0,avg;
	
	printf("Enter the size of row : ");
	scanf("%d",&m);
	
	printf("Enter the size of column : ");
	scanf("%d",&n);
	
	printf("Enter the elements of matrix : \n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			
			sum = sum +
			
			a[i][j];
			
			avg = sum/(m*n);
			
			printf("sum = %d\n",sum);
			printf("average = %d",avg);
			
		}
		
	}
		
		
		
	
	
	return 0;
}
