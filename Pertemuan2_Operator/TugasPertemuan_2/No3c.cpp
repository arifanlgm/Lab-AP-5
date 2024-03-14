#include <iostream>
using namespace std;

const double phi = 3.14;

double hitungLP(double jj) {
    return 4 * phi * jj * jj;
}

double hitungV(double jj) {
    return (4.0 / 3.0) * phi * jj * jj * jj;
}

int main() {
    system("cls");
    double jj;

    cout << "Jari-jari bola: ";
    cin >> jj;

    double lP = hitungLP(jj);
    double v = hitungV(jj);

    cout << "Luas permukaan : " << lP << endl;
    cout << "Volume         : " << v << endl;

    return 0;
}
