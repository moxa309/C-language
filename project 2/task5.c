#include<stdio.h>

int main(){
	
	float units,totalbill;
	
	printf("Enter Electricity Bill : ");
	scanf("%f",&units);
	
	if(units<=50){
		
		totalbill = units* 0.50;
		
	}
	else if(units<=150){
		
		totalbill = (50*0.50) + ((units - 50)*0.75);
	}
	else if(units<=250){
		
		totalbill = (50*0.50) + (100*0.75) + ((units - 150)*1.20);
		
	}
	else{
		totalbill = (50*0.50) + (100*0.75) + (100*1.20) + ((units - 250)*1.50);
	}
	
	totalbill = totalbill * 0.20;
	
	printf("The Electricity Bill is : %.2f\n",totalbill);
	
		
	return 0;
}
