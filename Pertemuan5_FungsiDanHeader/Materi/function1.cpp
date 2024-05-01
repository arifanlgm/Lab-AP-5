#include <iostream>
using namespace std;
    
int num3 = 10;

int sumNumber(int num1, int num2 = 10) {
  return num1 + num2 + num3;
}

int main() {
    system("cls");

    int hasil = sumNumber(5);

    cout << "\nHasil = " << hasil;

    return 0;
}