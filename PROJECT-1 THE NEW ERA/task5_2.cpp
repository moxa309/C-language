#include<iostream>
#include<string.h>

using namespace std;

class Employee{
	
	private :
	int id,contactno;
	char name[100],company[100],position[100];
};

int main(){
	
	Employee e1,e2;
	
	cout<<"Enter Id : ";
	cin>>e1.id;
	
	cout<<"Enter Name : ";
	cin>>e1.name;
	
	cout<<"Enter Company : ";
	cin>>e1.company;
	
	cout<<"Enter Position : ";
	cin>>e1.position;
	
	cout<<"Enter Mobile Number : ";
	cin>>e1.contactno;
	
	cout<<e1.id<<endl<<e1.name<<endl<<e1.company<<endl<<e1.position<<endl<<e1.contactno<<endl;
	
	cout<<"Enter Id : ";
	cin>>e2.id;
	
	cout<<"Enter Name : ";
	cin>>e2.name;
	
	cout<<"Enter Company : ";
	cin>>e2.company;
	
	cout<<"Enter Position : ";
	cin>>e2.position;
	
	cout<<"Enter Mobile Number : ";
	cin>>e2.contactno;
	
	cout<<e2.id<<endl<<e2.name<<endl<<e2.company<<endl<<e2.position<<endl<<e2.contactno<<endl;
		
	
	
	return 0;
}