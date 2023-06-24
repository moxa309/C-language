#include<stdio.h>
#include<string.h>

int main(){
	
	char a[] = "moxa05@gmail.com";
	char b[] = "9876543210";
	
	char c[20];
	char d[20];
	
	printf("Enter your email : ");
	scanf("%s",c);
	
	printf("Enter your Password : ");
	scanf("%s",d);
	
	int z = strcmp(a,c);
	int y = strcmp(b,d);
	
	if(z==0 && y==0){
		printf("You login succesfully");
	}	
	else{
		printf("Invalid! Please try again.");
	}
	return 0;
}
