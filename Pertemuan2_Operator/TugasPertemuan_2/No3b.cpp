#include <iostream>
#include <cmath>
using namespace std;

double hitungLalas(double alas, double tS, double tL) {
    double lS = 0.5 * alas * tS;
    double lL = 4 * lS;
    double lA = alas * alas;

    return lL + lA;
}

double hitungV(double alas, double tL) {
    return (1.0 / 3.0) * pow(alas, 2) * tL;
}

int main() {
    system("cls");
    double alas, tS, tL;

    cout << "Panjang alas    : ";
    cin >> alas;
    cout << "Tinggi segitiga : ";
    cin >> tS;
    cout << "Tinggi limas    : ";
    cin >> tL;

    double lP = hitungLalas(alas, tS, tL);
    double v = hitungV(alas, tL);

    cout << "Luas permukaan : " << lP << endl;
    cout << "Volume         : " << v << endl;

    return 0;
}
