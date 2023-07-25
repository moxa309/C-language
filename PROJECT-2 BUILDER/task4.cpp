#include<iostream>
#include<string.h>
using namespace std;

class State{
	
	public :
	
	static char name[100];
	char fav_city[100] = "Surat";
	char hometown[100] = "Sarthana";
	char famous_food[100] = "Khaman";
	
	static void getData(){
		
		cout<<name<<endl;
	}
};

char State ::name[100] = "Gujarat";

int main(){
	
	State s;
	
	cout<<"Name of State : "<<s.name<<endl
	<<"Name of Favourite City : "<<s.fav_city<<endl
	<<"Hometown Area : "<<s.hometown<<endl
	<<"Famous Food : "<<s.famous_food<<endl;
	
	return 0;
}
