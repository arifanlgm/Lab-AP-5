#include <iostream>
using namespace std;

main() {
    system("cls");

    int x = 101, *px;
 
    px = &x;
    *px = x;

    cout << "px[" << px << "] == " << "&x[" << &x << "]\n";
    cout << "*px[" << *px << "]     == " << "x[" << x << "]\n";

    system("pause");
}