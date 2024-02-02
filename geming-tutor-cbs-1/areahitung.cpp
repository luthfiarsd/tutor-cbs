#include <iostream>
using namespace std;

int main (){
    float x, segitiga, lingkaran, persegi, hijau, biru;
    const double PHI=3.14;

    cout << "Masukkan panjang: ";
    cin >> x;

    segitiga= x*x/2/2;
    lingkaran= PHI*x/2*x/2;
    persegi= x*x;
    
    hijau= persegi-lingkaran;
    biru= lingkaran-segitiga;

    cout << "Luas warna hijau: "<< hijau << endl;
    cout << "Luas warna biru: " << biru << endl;
    cout << "Luas warna ungu: " << segitiga;
}