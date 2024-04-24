#include <iostream>
using namespace std;

int main() {
    system("CLS");
  
    int n;
    string output;

    cout << "Masukkan n: ";
    cin >> n;

    output = 'H' + string(n, 'o') + 'r' + string(n, 'e') + string(n, '!');
    cout << "output: " << output << endl;

    return 0;
}
