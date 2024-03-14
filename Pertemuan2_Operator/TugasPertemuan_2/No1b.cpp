#include <iostream>
using namespace std;

//Perhitungan Manual :
//1 % 3 > 5 AND (9 / 5 < 6 OR 3 * 2 - 7 > 0)
//1 > 5 AND (1 < 6 OR 6 - 7 > 0)
//FALSE AND (TRUE OR FALSE)
//FALSE AND TRUE
//FALSE

int main() {
    system("cls");
    int i = 2, k = 7, l = 1, c = 9, u = 5, s = 6;
    bool hasil = (l % 3 > u) && ((c / u < s) || (3 * i - k > 0));

    cout << boolalpha << hasil << endl;

    return 0;
}