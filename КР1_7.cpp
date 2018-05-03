#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <math.h>

using namespace std;

const int rows = 5,cols = 5;
double mx[rows][cols],sum;

int main(){
	cout << "let's create our matrix!" << endl;
	for (int i = 0; i < rows; i++){
		cout << "please enter row " << i << " element by element:" << endl;
		for (int j = 0; j < cols; j++){
			cin >> mx[i][j];
		}
	}
	cout << "\nlet's take a look at source matrix:\n" << endl;
	for (int i = 0; i < rows;i++){
		for (int j = 0;j < cols;j++){
			cout << mx[i][j] << "\t";
		}
		cout << "\n";
	}
	for (int i = 0;i < rows; i++){
		if(!mx[i][i]){
			sum = 0;
			for (int j = 0;j < cols; j++ ){
				sum = sum + mx[i][j];
			}
			mx[i][i] = sum;
		}
	}
	cout << "\nwe scanned for zeros on main diag and killed 'em'\n: " << endl;
	for (int i = 0; i < rows;i++){
		for (int j = 0;j < cols;j++){
			cout << mx[i][j] << "\t";
		}
		cout << "\n";
	}
	getch();
		
}
