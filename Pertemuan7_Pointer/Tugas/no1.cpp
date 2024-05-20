#include <iostream>
using namespace std;

int main() {
    system("cls");

    int angga[10], *ptrAngga;

    for (int i = 0; i < 10; i++) {
        angga[i] = (2 * i) + 1;
    }

    ptrAngga = angga;

    for (int i = 0; i < 10; i++) {
        cout << "bilangan : " << angga[i] << " | alamat : " << &ptrAngga[i] << endl;
    }

    return 0;
} 