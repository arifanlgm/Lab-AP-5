#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

string fizzBuzz(int bil) {
    if (bil % 3 == 0 && bil % 5 == 0) {
        return "FizzBuzz";
    } else if (bil % 3 == 0) {
        return "Fizz";
    } else if (bil % 5 == 0) {
        return "Buzz";
    } else {
        return to_string(bil); //untuk mengubah int mnejadi string "i";
    }
}

void bilDeret(int x) {
    string output;
    if (x < 3 || x >= 100) {
        cout << "Input tidak valid, berikan nilai dengan rentang 3 - 100";
        return;
    }
    
        for (int i = 1; i <= x; ++i) {
            int deret = i * (i + 1);
            output += fizzBuzz(deret);
            if (i != x) {
                output += ", ";
            }
        }

        cout << output;

    cout << "\nTipe data " << (x * (x + 1)) << " adalah " << typeid(x * (x + 1)).name() << endl;
}

int main() {

    system("cls");

    int input;
    cout << "Masukkan deret ke : ";
    cin >> input;

    bilDeret(input);

}