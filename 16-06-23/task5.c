#include<stdio.h>

int main(){
	
	int i,j,m,n;
	
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
	int sum;
	
	for(i=0;i<n;i++){
		sum=0;
		
		for(j=0;j<m;j++){
			
			sum=sum+a[i][j];
		}
	
	
	printf("Sum of elements rowwise : %d \n",sum);
	
}
	
	return 0;
}
