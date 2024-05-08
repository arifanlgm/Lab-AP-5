#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};

    for (int nilai : arrayNilai) {
        cout << "Address " << &nilai << " -> " << nilai << endl;
//      nilai = 1;
    }

    for (int &nilaiRef : arrayNilai) {
        nilaiRef += 2;
    }

    cout << endl;

    for (int &nilaiRef : arrayNilai) {
        cout << "Address " << &nilaiRef << " -> " << nilaiRef << endl;
    }

cout << endl;

    return 0;
}