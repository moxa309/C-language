#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	char sol[100]="Cannot divide by Zero";
	
	try{
		if(b==0){
			throw 10;
		}
		else{
			c=a/b;
			cout<<"C is : "<<c<<endl;
		}
	}
	catch(...){
		cout<<sol<<endl;
	}
return 0;	
}
