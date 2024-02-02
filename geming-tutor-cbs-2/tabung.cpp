#include <iostream>
using namespace std;

int main (){
    float tinggi, radius, alas, selimut, permukaan, volume;       //deklarasi variabel
    const float PHI=3.14;

    cout << "Masukkan radius tabung: ";                          //input tinggi & radius
    cin >> radius;
    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;

    alas= PHI*radius*radius;                                     //operasi tabung
    selimut= 2*PHI*radius*tinggi;
    permukaan= 2*alas + selimut;
    volume= alas*tinggi;

    cout << endl << "Luas alas tabung: " << alas << endl;               //output
    cout << "Luas selimut tabung: " << selimut << endl;
    cout << "Luas permukaan tabung: " << permukaan << endl;
    cout << "Volume tabung: " << volume;

}