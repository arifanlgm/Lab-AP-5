#include <iostream>
using namespace std;

//Perhitungan Manual :
//2 - 9 > 7 OR 1 + 3 < 4 * 9
//-7 > 7 OR 1 + 3 < 36
//FALSE OR (4 < 36)
//FALSE OR TRUE
//TRUE

int main() {
    system("cls");
    int i = 2, k = 7, l = 1, c = 9, u = 5, s = 6;
    bool hasil = (i - 9 > k) || (l + 3 < 4 * c);

    cout << boolalpha << hasil << endl;

    return 0;
}