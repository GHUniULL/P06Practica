#include<iostream>
using namespace std;

int main() {
	
	int x, y, z;
	
	cin >> x;
	cin >> y;
	cin >> z;
	
	if(y<=x && z<=x){
		
		cout << x << endl;
	}
	else
		if(x<=y && z<=y){
			
			cout << y << endl;
		}
		else
			if(x<=z && y<=z){
				
				cout << z << endl;
			}
	return 0;
}
