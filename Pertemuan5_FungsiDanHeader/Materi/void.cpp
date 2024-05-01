#include <iostream>
using namespace std;

void garis (int karakter) {
//    for (int i = 0; i < karakter; i++) {
//        cout << "=";
//    }

    cout << string(karakter, "=");
}

int main() {
    system("cls");
    
    garis(7);
    cout << " Program Fungsi Tanpa Nilai Kembalian ";
    garis(7);

    return 0;
}