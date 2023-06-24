#include<stdio.h>
#include<string.h>

int main(){
	
	int pass;
	
	printf("Enter Password : ");
	scanf("%s",pass);
	
	int i,len;
	
	len = strlen(pass);
	
	if(len>=6){
		int alp=0,digit=0;
		
		for(i=0;i<len;i++){
			
		if(pass[i]>=0 && pass[i]<=9)
		digit = 1;
			
		else if(pass[i]>='a' && pass[i]<='z')
		alp = 1;
			
	}
	
	if(digit || alp){
		isvalid = 1;
		printf("Valid Password\n");
		
	}
	else{
		printf("Invalid Password. Password must contaion one alphabet and one digit");
	}
}
else{
printf("Invalid password. Password must be atleast 6 characters long.\n");	
	
}

		
	return 0;
}
