#include <iostream>
using namespace std;

int main() {
    
    system("cls");

    int angka;

    do
    {
    cout << "Masukkan angka dari -100 sampai 100: ";
    cin >> angka;
    } while (angka < -100 || angka > 100);

    cout << "Angka anda adalah " << angka << endl;

    return 0;
}