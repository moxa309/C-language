#include<iostream>
#include<string.h>
using namespace std;

class Employee{
	
	private :
	int id;
	char name[100];
	
	public :
	void setData(){
		
		cout<<"Enter Id : ";
		cin>>id;
		
		cout<<"Enter Name : ";
		cin>>name;
	}
	void getData(){
		
		cout<<"Employee Id : "<<id<<endl
		<<"Employee Name : "<<name<<endl;
	}
};
class Employee1{
	
	private :
		char role[100];
		int salary;
		
		public :
		void set(){
		cout<<"Enter Role : ";
		cin>>role;
		
		cout<<"Enter Salary : ";
		cin>>salary;
		}
		void get(){
		
		cout<<"Employee Role : "<<role<<endl
		<<"Employee Salary : "<<salary<<endl;
	}	
			
};
class Employee2 : public Employee , public Employee1{
	
	private :
	char contact[10];
	
	public : 
	void setter(){
		cout<<"Enter Contact Number : ";
		cin>>contact;
	}
	void getter(){
		cout<<"Employee Contact Number : "<<contact<<endl;
	}
};

int main(){
	
	Employee2 e;
	e.setData();
	e.set();
	e.setter();
	e.getData();
	e.get();
	e.getter();
	
	return 0;
}
