#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    char *kata = "K O M P U T E R", *ptrKata;

    ptrKata = kata;

    cout << "huruf kelima : " << *(ptrKata += 8) << endl;
    
    return 0;
}