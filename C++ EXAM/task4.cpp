#include<iostream>
#include<string.h>
using namespace std;

class Value{
	
	public :
		int x,y;
		float z;
		
		void set(){
			cout<<"Method from class Value"<<endl;
		}
		void set(int x){
			this->x = x;
			
			cout<<"X = "<<x<<endl;
		}
		void set(int x, int y){
			this->x = x;
			this->y = y;
			
			cout<<"X = "<<x<<" Y = "<<y<<endl;
		}
		void set(int x, int y, float z){
			this->x = x;
			this->y = y;
			this->z = z;
			
			cout<<"X = "<<x<<" Y = "<<y<<" Z = "<<z<<endl;
		}
};

int main(){
	
	Value v;
	
	v.set();
	v.set(10);
	v.set(10,20);
	v.set(10,20,22.2);
	
	return 0;
}