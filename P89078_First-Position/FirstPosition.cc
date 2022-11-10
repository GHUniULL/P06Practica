/*
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica 2022-2023
 */
#include <iostream>
using namespace std;      
 
int main()
{
  
    int N = 5;
  
    for (int i = 1; i <= 2 * N; i++) {

        if (i % 2 == 0){
            cout << i << " ";
    }
}

    for (int i = 1; i <= 2 * N; i++) {

        if (i % 2 != 0){
            cout << i << " ";
    }
    }
  
    return 0;
    }
