#include<iostream>
using namespace std;

int main() {
	char x;
	
	//cout << "Este programa te permite transformar una letra en su minuscula o viceversa" << endl;
	//cout << "Introduzca una letra: ";
	cin >> x;
	if(x>='A' && x<='Z'){
		
		x = x + 32;
	}
	else
		x = x - 32;
	
	cout << x << endl;
	
	return 0;
}
