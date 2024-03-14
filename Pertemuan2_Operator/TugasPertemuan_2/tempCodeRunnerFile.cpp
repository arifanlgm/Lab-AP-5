#include <iostream>
#include <cmath>
using namespace std;

double hitungLP(double aS, double tS, double tPrisma) {
    double luasAlas = 0.5 * aS * tS;
    
    double lSisi = 3 * aS * tPrisma;
    
    return 2 * luasAlas + lSisi;
}

double hV(double aS, double tS, double tPrisma) {
    double luasAlas = 0.5 * aS * tS;
    
    return luasAlas * tPrisma;
}

int main() {
    system("cls");
    double aS, tS, tPrisma;

    cout << "Panjang alas : ";
    cin >> aS;
    cout << "Tinggi       : ";
    cin >> tS;
    cout << "inggi prisma : ";
    cin >> tPrisma;

    double lPermukaan = hitungLP(aS, tS, tPrisma);
    double v = hV(aS, tS, tPrisma);

    cout << "Luas permukaan : " << lPermukaan << endl;
    cout << "Volume         : " << v << endl;

    return 0;
}
