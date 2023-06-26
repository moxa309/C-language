#include<stdio.h>
#include<string.h>
void main(){
	
	char a[100],b[100];
	printf("enter value :");
	scanf("%s",&a);
	strcpy(b,a);
	
        strrev(a);
    int c = strcmp(a,b);
	
	if(c==0){
		printf("it is palindrom");
		
	}
	else {
		printf("it is not  palindrom");
	}	
	
}