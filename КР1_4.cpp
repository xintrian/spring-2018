#include <iostream>
#include <conio.h>
#include <ctype.h>

using namespace std;

char ch,str[8];
int i = 0;

int main(){
	for (i = 0;i<8;){
		str[i] = getch();
		i++;
	}
	for (i = 0;i<8;i++){
		if (isdigit(str[i])){
			ch = static_cast<char>(str[i] | 0x40);
			}
		else{
			ch = static_cast<char>(str[i] & 0xDF);
			}
		cout << str[i] << "\t" << static_cast<int>(str[i]) << "\t" << ch << "\t" << static_cast<int>(ch) << endl;
	}
}
