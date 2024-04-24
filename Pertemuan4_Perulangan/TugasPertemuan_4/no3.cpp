#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main() {
    system("cls");
    int tahun, interval;
    char ulangi;
  

        cout << "Masukkan Tahun: ";
        cin >> tahun;

        // Validasi input tahun
        while (tahun <= 1000 || tahun >= 9000){
            cout << "Input tidak valid\n";
            cout << "Masukkan Tahun: ";
            cin >> tahun;
        }
    
        cout << "Masukkan Interval Tahun: ";
        cin >> interval;

        // Validasi input interval tahun
        while (interval <= -tahun || interval >= 9999 - tahun){
            cout << "Input tidak valid\n";
            cout << "Masukkan Interval Tahun: ";
            cin >> interval;
        }

        // Menampilkan hasil
        if (interval < 0){
            for (int i = interval; i <= 0; i++){
                if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
                    cout << tahun << " adalah tahun kabisat" << endl;
                } else {
                    cout << tahun << " bukan tahun kabisat" << endl;
                }
                tahun--;
            }
        } else {
            for (int i = 0; i <= interval; i++){
                if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
                    cout << tahun << " adalah tahun kabisat" << endl;
                } else {
                    cout << tahun << " bukan tahun kabisat" << endl;
                }
                tahun++;
            }
        }

    return 0;
}
