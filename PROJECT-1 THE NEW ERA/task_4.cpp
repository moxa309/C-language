#include<iostream>
#include<string.h>

using namespace std;

class House{
	
	public : 
	int no,room;
	char soc[100];
};

int main(){
	
	House h;
	
	cout<<"Enter House Number : ";
	cin>>h.no;
	
	cout<<"Enter Society Name : ";
	cin>>h.soc;
	
	cout<<"Enter number of rooms : ";
	cin>>h.room;
	
	cout<<h.no<<endl<<h.soc<<endl<<h.room;
	
	return 0;
}