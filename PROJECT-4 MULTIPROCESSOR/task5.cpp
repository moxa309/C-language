#include<iostream>
#include<string.h>
using namespace std;

class Points{
	public :
		int x,y;
		void set(int x, int y){
			this->x=x;
			this->y=y;
		}
		void print(){
			cout<<"X = "<<x<<" Y = "<<y<<endl;
		}
		Points operator+(Points n){
			Points temp;
			temp.x= this->x + n.x;
			temp.y= this->y + n.y;
			return temp;
		}
};
int main(){
	Points p,p1,p2;
	p.set(10,15);
	p.print();
	p1.set(20,30);
	p1.print();
	p2=p1+p;
	p2.print();
}
