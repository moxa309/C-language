#include<stdio.h>

int main(){
	
	int a[3][3]={{10,20,30},
	          {40,50,60},
	          {70,80,90}};
	          
	int row = sizeof(a) / sizeof(a[0]);
	int column = sizeof(a[0]) / sizeof(a[0][0]);
	
	printf("Number of rows are %d\n",row);
	printf("Number of columns are %d",column);          
	          
	          
	return 0;
}
