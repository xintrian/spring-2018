#include <iostream>
#include <stdio.h>
#include <math.h>


float	x,y,d;

int main(){
	std::cout <<"enter x " << "\n";
	std::cin >> x;
	std::cout <<"enter y " << "\n";
	std::cin >> y;
	if(x>y){
		d = (x-y)*(x-y)*(x-y) + atan(x);		
	} else if(x<y){
		d = (y-x)*(y-x)*(y-x) + atan(x);
	} else {
		d = (x+y)*(x+y)*(x+y)+0.5;
	}
	std::cout << "result is " << d;
}
