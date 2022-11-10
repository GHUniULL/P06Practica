/*
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica 2022-2023
 * Giancarlo Herrera
 */
#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool esprimo = true;

  cin >> n;

  if (n == 0 || n == 1) {
   esprimo = false;
  }

  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      esprimo = false;
      break;
    }
  }

  if (esprimo){
    cout << n << " es primo" << endl;
  }else
	cout << n << "no es primo" << endl;

  return 0;
}

