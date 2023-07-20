#include<iostream>
#include<string.h>

using namespace std;

class Time{
	
	public : 
	int hour,min;
};

int main(){
	
	Time t,t1,sum;
	
	cout<<"Enter Hour1 : ";
	cin>>t.hour;
	
	cout<<"Enter Min1 : ";
	cin>>t.min;
	
	cout<<"Enter Hour2 : ";
	cin>>t1.hour;
	
	cout<<"Enter Min2 : ";
	cin>>t1.min;
	
	sum.hour = t.hour + t1.hour;
	sum.min = t.min + t1.min;
	
	while(sum.min>60){
		
		sum.hour++;
		sum.min-=60;
	}
	
	cout<<"Hour : "<<sum.hour<<endl<<"Min : "<<sum.min;
	
	return 0;
}