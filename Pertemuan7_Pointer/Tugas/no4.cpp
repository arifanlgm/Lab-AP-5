#include <iostream>
using namespace std;

void tambah(int *a, int *b, float *hasil) {
    *hasil = *a + *b;
}
void kurang(int *a, int *b, float *hasil) {
    *hasil = *a - *b;
}
void kali(int *a, int *b, float *hasil) {
    *hasil = *a * *b;
}
void bagi(int *a, int *b, float *hasil) {
    if (*b != 0) {
        *hasil = *a / *b;
    } else {
        *hasil = 0;
    }
}

int main() {
    system("cls");
    
    int input1, input2;
    float output;
    char opsiOperasi, ulang;

    do
    {
        system("cls");

        cout << "masukkan dua angka dan opsi operasi, \nseperti = ... +-*/ ... \n" << endl;
        cin >> input1 >> opsiOperasi >> input2;

        switch (opsiOperasi) {
            case '+':
                tambah(&input1, &input2, &output);
                cout << output << endl;
                break;
            case '-':
                kurang(&input1, &input2, &output);
                cout << output << endl;
                break;
            case '*':
                kali(&input1, &input2, &output);
                cout << output << endl;
                break;
            case '/':
                bagi(&input1, &input2, &output);
                if (input2 != 0) {
                    cout << output << endl;
                }
                break;
        }

        cout << endl;
        cout << "tekan Y untuk mengulangi\n";
        cin >> ulang;
    }
    while (ulang == 'Y' || ulang == 'y');

    return 0;
}