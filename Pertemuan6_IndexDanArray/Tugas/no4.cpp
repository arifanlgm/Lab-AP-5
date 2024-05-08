#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


int main() {
    
    balek:
    system("cls");
    string inputAngka;

    do {
        cout << "Masukkan sebuah deretan angka menggunakan vektor\n";
        getline(cin, inputAngka);
    } while (inputAngka.length() < 1);

    stringstream ss(inputAngka);
    vector<int> angka;
    
    int num;
    while (ss >> num) {
        angka.push_back(num);
    }

    cout << "Panjang vector : " << angka.size() << endl;

    while (!angka.empty()) {
        cout << angka.front() << endl;
        angka.erase(angka.begin());
    }

    cout << "Panjang vector : " << angka.size() << endl;

    system("pause");

    goto balek;

}
