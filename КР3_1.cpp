#include <vektor.h>
#include <iostream>

using namespace std;

int main(){
	vektor v(5,5.45);
	v.display();
	cout << "\n" << v.getMember(3) << endl;
	cout << v.getMember(5) << endl;
	v.setMember(3,7.62);
	cout << "\n" << v.getMember(3) << endl;	
	v.display();
}
