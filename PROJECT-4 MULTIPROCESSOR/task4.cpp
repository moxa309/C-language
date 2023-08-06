#include<iostream>
#include<string.h>
using namespace std;

class Points{
	public :
		int x;
		void set(int x){
			this->x=x;
		}
		void print(){
			cout<<"X = "<<x<<endl;
		}
		Points operator++(int x){
			Points temp;
			temp.x=this->x++;
			return temp;	
		}
		Points operator--(int x){
			Points temp;
			temp.x=this->x--;
			return temp;
		}
};
int main(){
	
	Points p;
	p.set(10);
	p.print();
	p++;
	p.print();
	p--;
	p.print();
	return 0;
}
