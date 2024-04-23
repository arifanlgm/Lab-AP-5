#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int angka;

    cout << "Masukkan suatu bilangn bulat: ";
    cin >> angka;

    if (angka <= 0 && angka % 2 == 0 && angka % 3 == 0 && angka % 5 == 0 && angka % 7 == 0 && angka % 11 == 0 && angka % 13 == 0 && angka % 17 == 0 && angka % 19 == 0 && angka % 23 == 0 && angka % 29 == 0 && angka % 31 == 0) {
        cout << angka << " bukan bilangan prima" << endl;
    } else {
        cout << angka << " adalah bilangan prima" << endl;
    } 

 /*   if (angka > 0 && angka % 2 != 0 && angka % 3 != 0) {
        cout << "Prima";
    } else {
        cout << "Bukan Prima";
    } */
    
}