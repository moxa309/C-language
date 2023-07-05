#include<stdio.h>
#include<string.h>

struct Student{
	
	int stu_id,stu_age,stu_std;
	char stu_name[20],stu_course[20],stu_city[20],stu_school[20];
	
};

int main(){
	
	int n;
	struct Student stu[n];
	int i;
	
	printf("Enter the no. of data you want to Display : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		printf("Enter Id : ");
		scanf("%d",&stu[i].stu_id);
		
		printf("Enter Name : ");
		scanf("%s",&stu[i].stu_name);
		
		printf("Enter Age : ");
		scanf("%d",&stu[i].stu_age);
		
		printf("Enter Course : ");
		scanf("%s",&stu[i].stu_course);
		
		printf("Enter City : ");
		scanf("%s",&stu[i].stu_city);
		
		printf("Enter Std : ");
		scanf("%d",&stu[i].stu_std);
		
		printf("Enter School : ");
		scanf("%s",&stu[i].stu_school);
		
	}
	
	for(i=0;i<n;i++){
		
		printf("%d\n",stu[i].stu_id);
		printf("%s\n",stu[i].stu_name);
		printf("%d\n",stu[i].stu_age);
		printf("%s\n",stu[i].stu_course);
		printf("%s\n",stu[i].stu_city);
		printf("%d\n",stu[i].stu_std);
		printf("%s\n\n",stu[i].stu_school);
}
	
	
	
	return 0;
}
