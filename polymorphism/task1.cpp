#include<iostream>
#include<string.h>
using namespace std;

class Methods{
	public : 
	  int x;
	  float y;
	  char z[100];
	  void set(){
	  	cout<<"Method Set"<<endl;
	  }
	  void set(int x){
	  	this-> x = x;
	  	cout<<"Value of X : "<<x<<endl;
	  }
	  void set(int x, float y){
	  	this->x = x;
	  	this->y = y;
	  	cout<<"Value of X : "<<x<<endl;
	  	cout<<"Value of Y : "<<y<<endl;
	  }
	  void set(int x, float y, char z[]){
	  	this->x=x;
	  	this->y=y;
	  	strcpy(this->z,z);
	  	cout<<"Value of X : "<<x<<endl;
	  	cout<<"Value of Y : "<<y<<endl;
	  	cout<<"Value of Z : "<<z<<endl;
	  }
};
int main(){
	
	Methods m;
	m.set();
	m.set(15);
	m.set(15,21.36);
	m.set(15,21.36,"Moxa");
	return 0;
}
