#include <iostream>
using namespace std;

void segiTiga_Pascal(int t1, int segitiga[][30]) {
    for (int i = 0; i < t1; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || j == i) {
                segitiga[i][j] = 1;
            } else {
                segitiga[i][j] = segitiga[i - 1][j - 1] + segitiga[i - 1][j];
            }
        }
    }
}

int main() {

    balek:
    system("cls");

    int t2;
    do
    {
        cout << "Masukkan tinggi segitiga: ";
        cin >> t2;
    }
    while (t2 < 1 || t2 > 30);

    int segiTiga[30][30] = {0};

    segiTiga_Pascal(t2, segiTiga);

    for (int i = 0; i < t2; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << segiTiga[i][j] << " ";
        }
        cout << endl;
    }

    int baris, kolom;
    cout << "\nMasukkan baris dan kolom (1-" << t2 << "): ";
    cin >> baris >> kolom;

    cout << "Nilai pada Indeks [" << baris << "][" << kolom << "] = " << segiTiga[baris - 1][kolom - 1] << endl;

    system("pause");

    goto balek;

}