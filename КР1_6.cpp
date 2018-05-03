#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <math.h>

using namespace std;

const int size = 20;
double a[size],b[size],sor;

int main(){
	cout << "enter a's:" << endl;
	for(int i = 0;i < size; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	for(int i = 0;i < size;i++){
		sor = sor + a[i];
	}
	for(int i = 0;i<size;i++){
		b[i] = (sor - a[i])/19;
	}
	cout << "get your sor: " << endl;
	for(int i = 0;i<size;i++){
		cout << "b[" << i << "] = " << b[i] << endl;
	}
}
