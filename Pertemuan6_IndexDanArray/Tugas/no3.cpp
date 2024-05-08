#include <iostream>
#include <string>
using namespace std;

int main() {

    balek:
    system("cls");
    string kalimat;

    cout << "Masukkan sebuah kalimat :";
    getline(cin, kalimat);

    while (kalimat.length() > 100 || kalimat.length() < 1) {
        cout << "Inputan tidak valid, tolong masukkan kurang dari 100 karakter!";
        getline(cin, kalimat);
    }

    int setengahnya = kalimat.length() / 2;

    for (int i = setengahnya - 1; i >= 0; --i) {
        cout << kalimat[i];
    }

    if (kalimat.length() % 2 != 0) {
        cout << kalimat[setengahnya];
    }

    for (int i = kalimat.length() - 1; i >= setengahnya; --i) {
        cout << kalimat[i];
    }

    system("pause");

    goto balek;
    
}