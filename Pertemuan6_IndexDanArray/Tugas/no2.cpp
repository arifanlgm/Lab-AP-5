#include <iostream>
#include <cmath>
using namespace std;

float Efisiensi(int a, int b, int c) {
    return sqrt(a * a + b * b + c * c);
}

void input_output(const string& nama, int matriks[][3]) {
    cout << "Masukkan " << nama << ":\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Baris " << i + 1 << " | Kolom " << j + 1 << " : ";
            cin >> matriks[i][j];
        }
    }

    cout << "\nMatriks hasil " << nama << ": \n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    balek:
    system("cls");

    int koder[3][3], algoritma[3][3], pengujian[3][3];

    input_output("KODER", koder);
    input_output("ALGORITMA", algoritma);
    input_output("TESTER", pengujian);

    int maxKoder = koder[0][0], maksAlgoritma = algoritma[0][0], maksPengujian = pengujian[0][0];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (koder[i][j] > maxKoder) {
                maxKoder = koder[i][j];
            }
            if (algoritma[i][j] > maksAlgoritma) {
                maksAlgoritma = algoritma[i][j];
            }
            if (pengujian[i][j] > maksPengujian) {
                maksPengujian = pengujian[i][j];
            }
        }
    }

    float efisiensi = Efisiensi(maxKoder, maksAlgoritma, maksPengujian);
    cout << "\nEfisiensi terbesar adalah: " << efisiensi << endl;

    system("pause");

    goto balek;

}