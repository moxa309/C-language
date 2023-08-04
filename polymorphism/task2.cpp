#include<iostream>
#include<string.h>
using namespace std;

class India{
	public :
		void Rahul(){
			cout<<"Rahul wears Shirt & Pant"<<endl;
		}
};
class Pakistan : public India{
	public :
		void Rahul()
		{
			cout<<"Rahul wears kurta & dhoti"<<endl;
		}
};
int main(){
	Pakistan p;
	p.Rahul();
	p.India::Rahul();
}
