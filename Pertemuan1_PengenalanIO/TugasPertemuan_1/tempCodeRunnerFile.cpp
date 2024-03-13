#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float km,m;
    system("cls");

    cout << "Masukkan jarak dalam satuan meter yang kamu pikirkan\n";
    cin >> m;

    km = m / 1000;
    cout << "Maka jarak dalam kilo meter dari " << m << "m = " << km << "km";
}