#include<iostream>
#include<string.h>
using namespace std;

class Mother{
	
	public :
	int a=10;
	void display(){
		cout<<"Method from Class Mother "<<endl;
	}
};
class Daughter : public Mother{
	
	public :
	int b=20;
	void display(){
		cout<<"Method from Class Daughter "<<endl;
	}
};

int main(){
	
	Daughter obj;
	
	cout<<obj.b<<endl;
	obj.display();
	
	return 0;
}
