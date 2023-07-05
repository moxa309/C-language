#include<stdio.h>
#include<string.h>

struct Employee{
	
	int emp_id,emp_age,emp_experience;
	char emp_name[20],emp_role[20],emp_city[20],emp_company_name[20];
	
};

int main(){
	
	int n;
	struct Employee emp[n];
	int i;
	
	printf("Enter the no. of data you want to Display : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		printf("Enter Id : ");
		scanf("%d",&emp[i].emp_id);
		
		printf("Enter Name : ");
		scanf("%s",&emp[i].emp_name);
		
		printf("Enter Age : ");
		scanf("%d",&emp[i].emp_age);
		
		printf("Enter Role : ");
		scanf("%s",&emp[i].emp_role);
		
		printf("Enter City : ");
		scanf("%s",&emp[i].emp_city);
		
		printf("Enter Experience : ");
		scanf("%d",&emp[i].emp_experience);
		
		printf("Enter Company Name : ");
		scanf("%s",&emp[i].emp_company_name);
		
	}
	
	for(i=0;i<n;i++){
		
		printf("%d\n",emp[i].emp_id);
		printf("%s\n",emp[i].emp_name);
		printf("%d\n",emp[i].emp_age);
		printf("%s\n",emp[i].emp_role);
		printf("%s\n",emp[i].emp_city);
		printf("%d\n",emp[i].emp_experience);
		printf("%s\n\n",emp[i].emp_company_name);
}
	
	
	
	return 0;
}
