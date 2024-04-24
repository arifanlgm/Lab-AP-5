#include <iostream>
#include <string>

using namespace std;

int main() {
  system("cls");

  string input;
  char huruf;
  char pilihan;

    cout << "Masukkan kalimat: ";
    getline(cin, input);

    cout << "Masukkan 1 huruf yang ingin dihapus: ";
    cin >> huruf;

    int count = 0;
    for (size_t i = 0; i < input.length(); i++) {
      if (tolower(input[i]) == tolower(huruf)) {
        input.erase(i, 1);
        i--;
        count++;
      }
    }

    cout << "Kalimat yang setelah diubah: " << input << endl;
    cout << "Jumlah huruf yang dihapus " << huruf << " adalah: " << count << endl;

  return 0;
}