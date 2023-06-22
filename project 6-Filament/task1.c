#include<stdio.h>
#include<string.h>

int main(){
	
	char a[10];
	
	printf("Enter Value : ");
	scanf("%s",a[10]);
	
	char b[10];
	b[10] = strrev(a);
	
	if(a[10]==b[10]){
		
		printf("The string is Palindrome");
	}
	else{
		printf("The string is not palindrome");
	}
	

	return 0;
}
