#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

float x = 0.6,y;

int main(){
	cout.precision(3);
		cout.width(11);
		std::cout.setf( std::ios::fixed, std::ios::floatfield );
		cout << "x     " << "|";
		cout.precision(3);
		cout.width(11);
		std::cout.setf( std::ios::fixed, std::ios::floatfield );
		cout << "y     " << "\n";
		cout << "-----------|-----------" << "\n";
		x = x - 0.12;
	while (x>0.0){
		y = (x*log(x))*(x*log(x));
		cout.precision(3);
		cout.width(11);
		std::cout.setf( std::ios::fixed, std::ios::floatfield );
		cout << x << "|";
		cout.precision(3);
		cout.width(11);
		std::cout.setf( std::ios::fixed, std::ios::floatfield );
		cout << y << "\n";
		x = x - 0.12;
	}
//	x = x - 0.12;
	while (x>=-0.6){
		y = x*x*x*(9*log(fabs(x))*log(fabs(x)) - 6*log(fabs(x)) + 2) / 27;
		cout.precision(3);
		cout.width(11);
		std::cout.setf( std::ios::fixed, std::ios::floatfield );
		cout << x << "|";
		cout.precision(3);
		cout.width(11);
		std::cout.setf( std::ios::fixed, std::ios::floatfield );
		cout << y << "\n";
		x = x - 0.12;
	}
	
}
