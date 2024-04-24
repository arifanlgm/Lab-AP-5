#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "^ ";
        } for (int k = 9; k >= i; k--) {
            cout << "v " ;
        }
        cout << endl;
    }
    
    return 0;
}