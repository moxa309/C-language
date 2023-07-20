#include<iostream>
#include<string.h>

using namespace std;

class Student{
	
	public : 
	int id,std,mobileno;
	char name[100],school[100];
};

int main(){
	
	Student s1,s2;
	
	cout<<"Enter Id : ";
	cin>>s1.id;
	
	cout<<"Enter Name : ";
	cin>>s1.name;
	
	cout<<"Enter Std : ";
	cin>>s1.std;
	
	cout<<"Enter School : ";
	cin>>s1.school;
	
	cout<<"Enter Mobile Number : ";
	cin>>s1.mobileno;
	
	cout<<s1.id<<endl<<s1.name<<endl<<s1.std<<endl<<s1.school<<endl<<s1.mobileno<<endl;
	
	cout<<"Enter Id : ";
	cin>>s2.id;
	
	cout<<"Enter Name : ";
	cin>>s2.name;
	
	cout<<"Enter Std : ";
	cin>>s2.std;
	
	cout<<"Enter School : ";
	cin>>s2.school;
	
	cout<<"Enter Mobile Number : ";
	cin>>s2.mobileno;
	
	cout<<s2.id<<endl<<s2.name<<endl<<s2.std<<endl<<s2.school<<endl<<s2.mobileno<<endl;
	
	return 0;
}