#include <iostream>
#include <cmath>
using namespace std;

const double phi = 3.14;

double hitungLA(double jj, double t) {
    return phi * jj * (jj + sqrt(pow(t, 2) + pow(jj, 2)));
}

double hitungV(double jj, double t) {
    return (1.0 / 3.0) * phi * pow(jj, 2) * t;
}

int main() {
    system("cls");
    double jj, t;

    cout << "Jari-jari : ";
    cin >> jj;
    cout << "Tinggi    : ";
    cin >> t;

    double lA = hitungLA(jj, t);
    double v = hitungV(jj, t);

    cout << "Luas permukaan : " << lA << endl;
    cout << "Volume         : " << v << endl;

    return 0;
}
