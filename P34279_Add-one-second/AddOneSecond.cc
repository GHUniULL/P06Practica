#include<iostream>
using namespace std;

int main() {
	int hora, min, sec;
	cout << "Introduzca las horas: ";
	cin >> hora;
	cout << "Introduzca los minutos: ";
	cin >> min;
	cout << "Introduzca los segundos: ";
	cin >> sec;
		
	if (sec > 59 || sec < 0 || min > 59 || min < 0 || hora < 0) {
		cout << "Error: Introduzca valores validos";
		return 1;
	}
	
	if(sec<59){
		sec=sec+1;
		cout << hora << ":" << min << ":" << sec << endl;
		return 0;
	} else if(sec=59){
		sec=0;
		if (min < 59) {
			min=min+1;
			cout << hora << ":" << min << ":" << sec << "0" << endl;
			return 0;
		} else {
			hora=hora+1;
			min=0;
			sec=0;
			cout << hora << ":" << min << "0"<< ":" << sec << "0" <<endl;
			return 0;
		}
	}
	cout << "00:00:00" << endl;
	return 0;
}
