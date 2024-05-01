#include <iostream>
using namespace std;

    int faktorial(int input) {
        if (input > 1) {
            return input * faktorial(input-1);
        } else {
            return 1;
        }
    }
   
int main() {
    system("cls");
     
    cout << "Hasil dari 5! = " << faktorial(5);

    return 0;
}