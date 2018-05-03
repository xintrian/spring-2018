#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <math.h>

using namespace std;

double	calc(double x1, double x2, int i){
	return (i + 2*sin(x2) - x1);
}

double	xi,x1,x2,sum;

int main(){
	x1 = 0.327;
	x2 = 0.3;
	sum = x1 + x2;
	for(int i = 3;i<101;){
		xi = calc(x1,x2,i);
		sum = sum +xi;
	//	cout << i << "\t\t" << x1 << "\t" << x2 << "\t" << xi << "\t" << sum << endl;
		x1 = x2;
		x2 = xi;
		i++;
	}
	cout << "sum is " << sum;
}
