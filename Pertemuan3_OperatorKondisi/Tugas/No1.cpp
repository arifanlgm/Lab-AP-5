#include <iostream>
#include <cmath>
using namespace std;

int main() {
    system("cls");
    
    int bil;

    cout << "Masukkan angka apa saja : ";
    cin >> bil;

    if(bil % 2 == 0) {
        cout << bil << " adalah bilangan genap" << endl;
    } else {
        cout << bil << " adalah bilangan ganjil";
    }
    
    return 0;
}