#include <iostream>
#include <cmath>
using namespace std;

int main() {
    system("cls");

    int x, bil = 0, i;
    
    cout << "Masukkan bil genap : "; 
    cin >> bil;
    
    if (bil <= 0) 
        exit(0);
    cout << endl;

    for (i = 1; i <= bil; i++) {
        if (i % 2 == 0) 
        { x += pow(i, 2);}
    }
    
    cout << "Hasil jumlah bilangan kuadrat adalah : " << x << endl;
    
}
