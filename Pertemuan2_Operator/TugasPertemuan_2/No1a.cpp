#include <iostream>
using namespace std;

//Perhitungan Manual :
//3 - 1 < 2 OR 7 - 5 < 8 + 2 AND 1 + 7 >= 9 + 3
//2 < OR 2 < 10 AND 8 >= 12
//FALSE OR TRUE AND FALSE
//TRUE OR FALSE
//FALSE

int main() {
    system("cls");
    int i = 2, k = 7, l = 1, c = 9, u = 5, s = 6;
    bool hasil = (3 - 1 < i) || (k - 5 < 8 + 2 && l + 7 >= 9 + 3);

    cout << boolalpha << hasil << endl;

    return 0;
}