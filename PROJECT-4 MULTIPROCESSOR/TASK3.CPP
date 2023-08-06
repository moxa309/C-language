#include<iostream>
#include<string.h>
using namespace std;

class A{
	public :
		void set(){
			cout<<"Method from class A"<<endl;
		}
		
};
class B : public A{
	public :
		void set(){
			cout<<"Method from class B"<<endl;
		}
};
int main(){
	
	B b;
	b.set();
	b.A::set();
	return 0;
}
