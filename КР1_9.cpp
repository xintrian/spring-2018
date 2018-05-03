#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;

char* getStr(const char* fname) throw (char*){
	int len;
	ifstream in(fname, ios::binary|ios::in);
	if (!in) throw "unable to open file";
	if(!(len = in.seekg(0,ios::end).tellg())) throw "file is empty";
	in.seekg(0,ios::beg);
	char* buffer = new char[len+1];
	in.read(buffer,len);
	buffer[len]=0;
	in.close();
	return buffer;
}

int main(){
	char *str, ch;
	int d;
	const char *fname = "src.txt";
	try {
		str = getStr(fname);
		cout << "src string: " << endl;
		cout << str << endl;
		cout << "resulting string: " << endl;
		for (int i = 0; i<strlen(str);i++){
			if(isdigit(str[i])){
				d = str[i] - '0';
				cout << str[d-1];
			}
			else cout << str[i];
		}
		delete[] str;
		}
	catch (char *er){
		cerr << er << endl;
	}
	return 0;
}
