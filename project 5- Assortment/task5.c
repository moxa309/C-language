#include<stdio.h>

int main(){
	
	int i,j,m,n;
	
	printf("Enter the size of rows : \n");
	scanf("%d",&n);
	
	printf("Enter the size of column : \n");
	scanf("%d",&m);
	
	int a[n][m],b[n][m];
	
	
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
			printf("Enter Value : ");
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
			
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
			printf("%d",b[i][j]);
			
		}
		printf("\n");
	}
	
	
	return 0;
}
