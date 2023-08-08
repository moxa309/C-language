#include<iostream>
#include<string.h>
using namespace std;

class Time{
	
	public : 
	  int sec,min,hour;
};

int main(){
	
	Time t;
	
	cout<<"Enter seconds : ";
	cin>>t.sec;
	
	while(t.sec>=60){
		
		t.min++;
		t.sec-=60;
	}
	while(t.min>=60){
		
		t.hour++;
		t.min-=60;
	}
	cout<<t.hour<<":"<<t.min<<":"<<t.sec<<endl;
	
	return 0;
}
