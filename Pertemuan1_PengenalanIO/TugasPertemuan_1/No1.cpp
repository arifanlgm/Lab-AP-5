#include <iostream>
using namespace std;
int main(){
    string nama,kom,nim,ipk;
    system("cls");
    cout << "Masukkan Nama Kamu\n";
    getline(cin,nama);
    cout << "Masukkan KOM Kamu\n";
    cin >> kom;
    cout << "Masukkan NIM Kamu\n";
    cin >> nim;
    cout << "Masukkan IPK Kamu\n";
    cin >> ipk;
        system("cls");
        cout << "Nama kamu " << nama << endl;
        cout << "NIM kamu " << nim << endl;
        cout << "KOM kamu " << kom << endl;
        cout << "IPK kamu " << ipk << endl;
}