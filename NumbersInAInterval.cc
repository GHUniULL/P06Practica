#include<iostream>
using namespace std;

int main() {
    int a, b, i;
    cin >> a;
    cin >> b;
    cout << endl;
    if(a<=b){
        for(i=a ; i<=b ; i++){
            cout << i << endl;
        }
    }
    else{
        for(i=b ; i<=a ; i++){
            cout << i << endl;
        }
    }
    return 0;
}
