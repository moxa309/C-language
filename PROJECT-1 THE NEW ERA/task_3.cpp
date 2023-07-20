#include<iostream>
#include<string.h>

using namespace std;

class Time{
	
	public :
	int hour=0,min=0,sec;
};

int main(){
	
	Time t;
	
	cout<<"Enter Seconds : ";
	cin>>t.sec;
	
	while(t.sec>=60){
		
		t.min++;
		t.sec-=60;
	
	}
	while(t.min>=60){
			
			t.hour++;
			t.min-=60;
		}
	
	cout<<"Time is : "<<t.hour<<":"<<t.min<<":"<<t.sec;
	
	return 0;
}