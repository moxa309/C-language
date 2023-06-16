#include<stdio.h>

int main(){
	
	int n,i,sum=0,a[i],avg;
	
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		printf("Enter Number %d: ",i+1 );
	scanf("%d",&a[i]);
	
	sum += a[i];
}
     avg = sum/n;
     printf("Average = %d",avg);



	return 0;
}
