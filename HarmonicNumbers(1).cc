#include <iostream>
using namespace std;
 

double nthHarmonic(int N){

    float harmonic = 1.00;

    for (int i = 2; i <= N; i++) {
        harmonic += (float)1 / i;
    }
 
    return harmonic;
}
 
int main()
{
    int N;
    cin >> N;
     
    cout<<nthHarmonic(N);
     
    return 0;
}
