#include<iostream>
#include<string.h>

using namespace std;

class Highschool{
	
 public :
	int id=1;
	char stu_name[100]="Moxa";
	int stu_roll_no=12;
	int stu_standard=11;
	int stu_age=16;
	char stu_contact[10]= "987654321";
	static char stu_edu_institute[100];
	char stu_address[100]="Sarthana";	
	
	static void print(){
		
		cout<<stu_edu_institute<<endl;
	}
	
};

char Highschool ::stu_edu_institute[100] = "Ashadeep";  

class College{
	
	public :
	int id=1;
	char stu_name[100]="Helly";
	int stu_roll_no=12;
	int stu_standard=11;
	int stu_age=19;
	char stu_contact[10]="987654321";
	static char stu_edu_institute[100];
	char stu_address[100]="Sarthana";	
	
	static void print(){
		
		cout<<stu_edu_institute<<endl;
	}
	
};

char College ::stu_edu_institute[100] = "Scet";  

int main(){
	
	Highschool s;
	
	cout<<"Id : "<<s.id<<endl
	<<"Name : "<<s.stu_name<<endl
	<<"Roll No. : "<<s.stu_roll_no<<endl
	<<"Standard : "<<s.stu_standard<<endl
	<<"Age : "<<s.stu_age<<endl
	<<"Contact : "<<s.stu_contact<<endl
	<<"Education Institute Name : "<<s.stu_edu_institute<<endl
	<<"Address : "<<s.stu_address<<endl;
	
	cout<<"\n\n\n";
	
	College c;
	
	cout<<"Id : "<<c.id<<endl
	<<"Name : "<<c.stu_name<<endl
	<<"Roll No. : "<<c.stu_roll_no<<endl
	<<"Standard : "<<c.stu_standard<<endl
	<<"Age : "<<c.stu_age<<endl
	<<"Contact : "<<c.stu_contact<<endl
	<<"Education Institute Name : "<<c.stu_edu_institute<<endl
	<<"Address : "<<c.stu_address<<endl;
	
	return 0;
}
