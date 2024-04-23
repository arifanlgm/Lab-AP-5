#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int angka;

    system("cls");

    do
    {
    cout << "Masukkan suatu bilangan bulat: ";
    cin >> angka;
    }
    while (angka <= 0);


    if (angka % 2 != 0) {
        cout << "\nAngka " << angka << " adalah bilangan ganjil";
    } else {
        cout << "\nAngka " << angka << " adalah bilangan genap";
    }

    if (angka % 3 != 0) {
        cout << "\nAngka " << angka << " tidak habis dibagi 3";
    } else {
        cout << "\nAngka " << angka << " habis dibagi 3";
    }

    if (angka % 5 != 0) {
        cout << "\nAngka " << angka << " tidak habis dibagi 5";
    } else {
        cout << "\nAngka " << angka << " habis dibagi 7";
    }

    if (angka % 7 != 0) {
        cout << "\nAngka " << angka << " tidak habis dibagi 7";
    } else {
        cout << "\nAngka " << angka << " habis dibagi 7";
    }
}