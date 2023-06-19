#include<stdio.h>

int main(){
	
	int i,j,m,n,sum[100][100];
	
	printf("Enter the size of rows : \n");
	scanf("%d",&n);
	
	printf("Enter the size of column : \n");
	scanf("%d",&m);
	
	int a[n][m];
	
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
			printf("a[%d][%d] = \n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int b[n][m];
	
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
			printf("a[%d][%d] = \n",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("Sum of two matrices : \n");
	
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
			printf("%d",sum[i][j]);
			
		}
	}
	
	
	
	return 0;
}
