#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int i,deret,x;

    cout << "Deret 1 6 9 14 17 22 25 30 33 ...\n";

    cout << "Input Bilangan Deret ke : ";
    cin >> deret;

    x=1; 
    for (i=1; i<=deret; i++) {
        cout << x << " ";
        if (i % 2 == 1) {
            x += 5;
        } else {
            x += 3;
        } 
    }

}