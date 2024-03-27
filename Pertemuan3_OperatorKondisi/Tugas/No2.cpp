#include <iostream>
using namespace std;
    int main() {
    system ("cls");
    int gajiPokok, tunjanganAnak, pajak, totalGaji;
    int golongan, jumlahAnak;
    cout<< "## Menghitung Gaji Bersih ##" <<endl;
    cout<< "============================" <<endl;
    cout << "Masukkan Golongan (1, 2, atau 3): ";
    cin >> golongan;
    switch (golongan) {

        case 1:
            gajiPokok = 5000000;
            break;
        case 2:
            gajiPokok = 3000000;
            break;
        case 3:
            gajiPokok = 2500000;
            break;
        default:
        cout << "Golongan tidak valid!" << endl;
        return 0;
    }
    cout << "Masukkan jumlah anak: ";
    cin >> jumlahAnak;
    if (jumlahAnak <= 2) {
    tunjanganAnak = 500000;
    } else {
    tunjanganAnak = 750000;
    }
    pajak = gajiPokok * 0.05;
    totalGaji = gajiPokok + tunjanganAnak - pajak;
    cout << "Total gaji yang diterima: Rp" << totalGaji << endl;

    return 0;
}