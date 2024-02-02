#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x ;

    if (x==10){
        cout << "Selamat anda lulus dan nilai anda sempurna!";
    } else if(x < 10 and x >= 7){
        cout << "Selamat anda lulus.";
    } else {
        cout << "Nilai anda tidak memenuhi :(";
    }
    return 0;
} 
