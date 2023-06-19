#include<stdio.h>

int main(){
	
	int i,j,m,n,sum=0;
	
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
	
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
			printf("%d",a[i][j]);
			
		}
		printf("\n");
	}
	
	
	for(i=0;i<n;i++){
		
		
		for(j=0;j<m;j++){
			
			if(i==j){
			
			
			sum=sum+a[i][j];
		}
	}
	
	
	printf("Sum of diagonal elements : %d \n",sum);
	
}
	
	return 0;
}
