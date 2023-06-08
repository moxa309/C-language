#include<stdio.h>

#include<stdio.h>

int main(){
	
	char a;
	
	printf("Enter Value : ");
	scanf("%c",&a);
	
	switch(a){
		
		
		case 'M':
			printf("Monday");
			break;
		
		case 'T':
			printf("Tuesday");
			break;
			
		case 'W':
			printf("Wednesday");
			break;
				
		case 'U':
			printf("Thrusday");
			break;
			
		case 'F':
			printf("Friday");
			break;	
			
			
		
			
		case 'S':
			printf("Saturday");
			break;	
		
		case 'N':
			printf("Sunday");
			break;	
			
		default :
			printf("Invalid Character. Please Try Again");
			break;
			
			
			
	}
	
	
	
	return 0;
}
