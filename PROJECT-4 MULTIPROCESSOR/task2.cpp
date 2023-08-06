#include<iostream>
#include<string.h>
using namespace std;

class Values{
	public :
		int a,b;
		float c;
		
		void v1(){
			cout<<"Values"<<endl;
		}
		void v2(float c){
			this->c=c;
			
			cout<<"C = "<<c<<endl;
		}
		void v3(int a,float c){
			this->a=a;
			this->c=c;
			
			cout<<"A = "<<a<<endl
			<<"C = "<<c<<endl;
		}
		void v4(int a,int b,float c){
			this->a=a;
			this->b=b;
			this->c=c;
			
			cout<<"A = "<<a<<endl
			<<"B = "<<b<<endl
			<<"C = "<<c<<endl;
		}
};
int main(){
	
	Values v;
	v.v1();
	v.v2(20.36);
	v.v3(10,20.36);
	v.v4(10,20,20.36);
}
