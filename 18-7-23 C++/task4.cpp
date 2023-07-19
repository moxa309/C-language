#include<iostream>
using namespace std;

int main(){
	
	char a;
	
	cout<<"Enter Value : ";
	cin>>a;
	
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
		
		cout<<"The character is vowel";
	}
	else{
		"The character is consonant";
	}
	
	return 0;
}