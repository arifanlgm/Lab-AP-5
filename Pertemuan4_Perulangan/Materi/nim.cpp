#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    
    int nim;

    awal:
    cout << "Masukkan NIM anda : ";
    cin >> nim;
    if (nim < 100000000 || nim > 300000000) {
        system("pause");
    }

    // tentukan urutan
    int urutan = nim % 1000;

    // stambuk
    int stambuk = nim / 10000000;

    // prodi
    string programStudi;
    int prodi = (nim % 100000) / 1000;
    switch (prodi) {
        case 1:
            programStudi = "Ilmu Komputer";
            break;
        
        case 2:
            programStudi = "Teknologi Informasi";
            break;
        default:
            goto awal;
    }

    // fakultas
    string fak;
    int fakultas = (nim % 10000000) / 100000;
    if (fakultas = 14) {
        fak = "Fasilkom-TI";
    } else {
        goto awal;
    }

    cout << "Urutan anda adalah " << urutan << endl;
    cout << "Stambuk anda adalah 20" << stambuk << endl;
    cout << "Prodi anda adalah " << programStudi << endl;
    cout << "Fakultas anda adalah " << fak << endl;
    
    return 0;
}