#include<iostream>
#include<string.h>

using namespace std;

class Hotel{
	
	private :
	int id,staff_size,room_size,establish_year,rating_type;
	char name[100],type[100],address[100],website[100];

	public :
		
		void setData(int id,char name[],char type[],int staff_size,int room_size,int establish_year,char address[],int rating_type,char website[]){
			
			this->id = id;
			strcpy(this->name,name);
			strcpy(this->type,type);
			this->staff_size = staff_size;
			this->room_size = room_size;
			this->establish_year = establish_year;
			strcpy(this->address,address);
			this->rating_type = rating_type;
			strcpy(this->website,website);
			
		}
		
		void getData(){
			
			cout<<"Hotel Id : "<<id<<endl
			<<"Hotel Name : "<<name<<endl
			<<"Hotel Type : "<<type<<endl
			<<"Hotel Staff Size : "<<staff_size<<endl
			<<"Hotel Room Size : "<<room_size<<endl
			<<"Hotel Establish Year : "<<establish_year<<endl
			<<"Hotel Address : "<<address<<endl
			<<"Hotel Rating Type : "<<rating_type<<endl
			<<"Hotel Website : "<<website<<endl;
		
		}
};

int main(){
	
	Hotel h;
	
	h.setData(10,"Amiras","5 star",25,10,2018,"Sathana",4,"amiras23.com");
	h.getData();
	
	return 0;
}
