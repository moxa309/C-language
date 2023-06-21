#include<stdio.h>
#include<string.h>

int main(){
	
	char pass[50];
	int isvalid = 0;
	
	
	printf("Enter Password : ");
	scanf("%s",pass[50]);
	
	int i,len;
	
	len = strlen(pass);
	
	if(len>=6){
		
		int hasalp = 0, hasdigit = 0;
		
		for(i=0;i<len;i++){
			
			if(pass[i]>=0 && pass[i]<=9)
				hasdigit = 1;
		
			else if(pass[i]>'a' && pass[i]<'z')
				hasalp = 1;
			
			
}
        if(hasdigit && hasalp){
        	isvalid = 1;
        	printf("Valid Password.\n");
        	
		}
		else{
		 printf("Invalid Password. Password must contain one alphabet, one digt and opne special character.\n");	
		}
}
	else{
		printf("Invalid Password. Password must be at least 6 characters long.\n");
	}
	
	return 0;
}
