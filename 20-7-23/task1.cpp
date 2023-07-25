#include<iostream>
#include<string.h>

using namespace std;

class Employee{
	
	private : 
	int id,salary,exp;
	char name[100],role[100],add[100],email[100],contact[10];
	
	public : 
	
	void setData(){
		
		cout<<"Enter Employee Id : ";
		cin>>id;
		
		cout<<"Enter Employee Name : ";
		cin>>name;
		
		cout<<"Enter Employee Role : ";
		cin>>role;
		
		cout<<"Enter Employee Salary : ";
		cin>>salary;
		
		cout<<"Enter Employee Experience : ";
		cin>>exp;
		
		cout<<"Enter Employee Adrress : ";
		cin>>add;
		
		cout<<"Enter Employee Email : ";
		cin>>email;
		
		cout<<"Enter Employee Contact Number : ";
		cin>>contact;
		
	}
	
	void getData(){
		
		cout<<"Employee Id : "<<id<<endl
		<<"Employee Name : "<<name<<endl
		<<"Employee Role : "<<role<<endl
		<<"Employee Salary : "<<salary<<endl
		<<"Employee Experience : "<<exp<<endl
		<<"Employee Address : "<<add<<endl
		<<"Employee Email : "<<email<<endl
		<<"Employee Contact Number : "<<contact<<endl;
	}
};

int main(){
	
	Employee e1,e2,e3,e4,e5;
	
	e1.setData();
	e2.setData();
	e3.setData();
	e4.setData();
	e5.setData();
	e1.getData();
	e2.getData();
	e3.getData();
	e4.getData();
	e5.getData();
	
	
	return 0;
}