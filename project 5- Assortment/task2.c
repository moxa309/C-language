#include<stdio.h>

int main(){
	
	int n,i;
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter elements of array : \n");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}
	int largest = a[0];
	int second_largest = a[0];
	
	for(i=0;i<n;i++){
		if(a[i]>largest){
			second_largest =  largest;
			largest = a[i];
		}
		else if(a[i]>second_largest && a[i]<largest)
{
	second_largest = a [i];
	}	
	}
	printf("The second largest number in the array is : %d\n",second_largest);
	
	return 0;
}
