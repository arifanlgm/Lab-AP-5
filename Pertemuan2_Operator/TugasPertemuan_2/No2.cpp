#include <iostream>
#include <cmath>

using namespace std;

int main() {
    system("cls");
    double A, B, C;
    double hasil = (B * B - 4 * A * C);

    cout << "A: ";
    cin >> A;
    cout << "B: ";
    cin >> B;
    cout << "C: ";
    cin >> C;

    if (hasil < 0) {
        cout << "Error, persamaan tidak memiliki akar real." << endl;
    } else {
        double x1 = (-B + sqrt(hasil)) / (2 * A);
        double x2 = (-B - sqrt(hasil)) / (2 * A);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}
