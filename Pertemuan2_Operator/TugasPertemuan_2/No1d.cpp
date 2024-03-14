#include <iostream>
using namespace std;

//Perhitungan Manual :
//0011 SHL 2 = 1100
//0111 AND 0001 = 0001
//0001 XOR 1100 = 1101
//1101 OR 0010 = 1111
//1111 = 15

int main() {
    system("cls");
    int i = 2, k = 7, l = 1, c = 9, u = 5, s = 6;
    int hasil = i | k & l ^ 3 << 2;

    cout << hasil << endl;

    return 0;
}