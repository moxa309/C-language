#include<stdio.h>

int main(){
	
	printf("Welcome To Swiggy\n");
	
	int a;
	
	printf("1. HOTEL RAJ\n");
	printf("2. HOTEL AVADH\n");
	
	printf("Enter Your Selection : ");
	scanf("%d",&a);
	
	switch(a){
		
		case 1:
			printf("\n\n 1. Normal Dining\n");
			printf("2. VIP Dining\n");
			
			printf("Enter Yur Selection : ");
			scanf("%d",&a);
			
			switch(a){
				
				case 1:
					printf("1. Welcome Drinks\n");
					printf("2. Soups\n");
					printf("3. Appetizers/Starters\n");
					printf("4. Curries\n");
					printf("5. Indian Breads\n");
					printf("6. Desserts\n");
					printf("7. Beverages\n");
					
					printf("Enter Your Selection : ");
					scanf("%d",&a);
					
					
					switch(a){
						
						case 1:
							printf("\n\n 1.Classic Mojito\t100/-\n 2.Strawberry Mojito\t120/-\n 3. Blueberry Mojito\t130/-\n 4. Basil Mojito\t120/-\n");
							break;
							
						printf("Enter Your Selection : ");
					    scanf("%d",&a);	
					    
					    printf("Here is your order");
					    
					    case 2:
					    	printf("\n\n 1. Manchow\t150/-\n 2. Hot And Sour\t170/-\n 3. Almond Broccoli\t160/-\n 4. Chilli Tomato\t150/-\n");
							break;
							
							printf("Enter Your Selection : ");
					    scanf("%d",&a);	
					    
					    printf("Here is your order");
					    
					    case 3:
					    	printf("\n 1. Manchurian\t160/-\n 2. Aloo Tikki /t140/-\n 3. Paneer Tikka\t180/-\n");
							break;
							
							printf("Enter Your Selection : ");
					    scanf("%d",&a);	
					    
					    printf("Here is your order");
					    
					    case 4:
					    	printf("\n 1. Paneer Tikka Masala\t250/-\n 2. Kaju Curry\t270/-\n");
							break;
							
							printf("Enter Your Selection : ");
					    scanf("%d",&a);	
					    
					    printf("Here is your order");
					    
					    case 5:
					    	printf("\n 1. Naan\t80/-\n 2. Roti\t50/-/n");
					    	break;
					    	
					    	printf("Enter Your Selection : ");
					    scanf("%d",&a);	
					    
					    printf("Here is your order");
					    
					    case 6:
					    	printf("\n 1. Chocolate Brownie\t150/-\n 2. Pastries\t100/-\n 3. Ice Cream\t50/-\n");
					    	break;
					    	
					    	printf("Enter Your Selection : ");
					    scanf("%d",&a);	
					    
					    printf("Here is your order");
					    
					    case 7:
					    	printf("\n 1. Coke\t40/-\n 2. Fanta\t40/-\n 3. Pepsi\t40/-\n");
					        break;
					        
					        printf("Enter Your Selection : ");
					    scanf("%d",&a);	
					    
					    printf("Here is your order");
					    
					    default:
					    	printf("Invalid Input");
					    	break;
					    	
					    	
					    	
					}
					
					
					
					case 2:
						printf("Sorry! The Dining is Full");
						break;
						
						default:
							printf("Invalid Input");
							break;
					
					
					
			}
		
		
		
		
		
	}
	
	return 0;
}
