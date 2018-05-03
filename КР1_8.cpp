#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int size,id,maxx,jd;
int** mx;
int intersection;

int main(){
	cout << "let's create our matrix. pls enter it's size: ";
	cin >> size;
	mx = new int*[size];
	for (int i = 0; i < size; i++){
		mx[i] = new int[size];
	}
	srand(static_cast<unsigned>(time(NULL)));
	cout << "generating matrix..." << endl;
	for(int i = 0; i<size;i++){
		for(int j = 0;j<size;j++){
			mx[i][j] = rand();
			cout << mx[i][j] << "\t";
		}
		cout << "\n";
	} 
	cout << "detecting intersection element.." << endl;
	if(!(size % 2)){
		cout << "there are no intersection element in this matrix. quiting...";
		return 1;
	}
	intersection = mx[size / 2][size / 2];
	cout << "intersection index is " << (size / 2 + 1)<< endl;
	cout << "intersection element is " << intersection << endl;
	maxx = mx[0][0];
	for(int i = 0;i<size;i++){
		if(maxx < mx[i][i]){
			maxx = mx[i][i];
			id = i;
			jd = i;
		}
	}
	for (int i = size-1;i>=0;i--){
		if(maxx<mx[i][size-i]){
			int j = size - i - 1;
			maxx=mx[i][j];
			id = i;
			jd = size-i-1;
		}
	}
	cout << "maxx element of all diags is " << maxx << " and it's position is " << (id+1) << ":" << (jd+1) << endl;
	cout << "now we're readey to change intersection element by our max: " << endl;
	mx[size/2][size/2] = maxx;
	mx[id][jd] = intersection;
	for(int i = 0; i<size;i++){
		for(int j = 0;j<size;j++){
			cout << mx[i][j] << "\t";
		}
		cout << "\n";
	} 
	
}
