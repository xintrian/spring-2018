#include <iostream>
#include <stdio.h>
#include <math.h>

float d,x,y,z,t;

int main(){
	std::cout << "enter x" << "\n";
	std::cin >> x;
	std::cout << "enter y" << "\n";
	std::cin >> y;
	std::cout << "enter z" << "\n";
	std::cin >> z;
	d= (exp(fabs(x-y))*tan(z))/(atan(y)+sqrt(x)) + log(x*y*z)*log(x*y*z);
	std::cout << "result is "<< d;
}
