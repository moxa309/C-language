#include<iostream>
#include<string.h>
using namespace std;

class Animal{
	public :
		int age;
		char name[100],origin[100];
		
		void set_value(){
			cout<<"Enter Place of Origin : "<<endl;
			cin>>origin;
		}
		
};
class Zebra : public Animal{
	public :
		void setData(){
			cout<<"Enter Name of Zebra: "<<name<<endl;
			cin>>name;
			cout<<"Enter Age of Zebra: "<<age<<endl;
			cin>>age;
		}
		void getData(){
			cout<<"Name : "<<name<<endl
			<<"Age : "<<age<<endl
			<<"Origin : "<<origin<<endl;
		}
};
class Dolphin : public Animal{
	public :
		void set(){
			cout<<"Enter Name of Dolphin: "<<name<<endl;
			cin>>name;
			cout<<"Enter Age of Dolphin: "<<age<<endl;
			cin>>age;
		}
		void get(){
			cout<<"Name : "<<name<<endl
			<<"Age : "<<age<<endl
			<<"Origin : "<<origin<<endl;
		}
};
int main(){
	
	Zebra z;
	z.setData();
	z.set_value();
	z.getData();
	
	Dolphin d;
	d.set();
	d.set_value();
	d.get();
	return 0;
}
