#include <vektor.h>
#include <iostream>

using namespace std;

int main(){
	vektor v(5,5.45);
	vektor v2(7,666);
	vektor a(3,1);
	vektor b(3,2);
	vektor sum,some;
	if(1){
		vektor fff;
		cout <<"ObjNum is " << (a.getObjNum())<<endl;
		
	}
	cout <<"vektor a" << endl;
	a.display();
	cout <<"\nvektor b"<<endl;
	b.display();
	cout << "\na==b is " << (a==b) << endl;
	cout <<"b>a is "<< (b>a)<<endl; 
	cout <<"a<b is "<< (a<b)<<endl; 
	cout <<"ObjNum is " << (a.getObjNum());
}
