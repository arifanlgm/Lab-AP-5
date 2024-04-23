#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int i, j ,k;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        } for (k = 9; k >= i; k--) {
            cout << " " ;
        }
        cout << endl;
    }
    
    return 0;
}