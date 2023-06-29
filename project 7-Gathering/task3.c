#include<stdio.h>

int main(){
	
	void len(char arr[]){
		int i;
		
		for(i=0;arr[i]!='\0';i++){
			
		}
		printf("Length : %d",i);
	}
	
	char arr[100];
	
	printf("Enter the Value [%d] : ");
	scanf("%d",&arr);
	
	len(arr);
	
	return 0;
}
