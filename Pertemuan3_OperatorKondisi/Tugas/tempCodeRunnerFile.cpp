#include <iostream>
#include <cmath>
using namespace std;

int main() {
    system("cls");
    double a,bb,tb;
    cout << "Berapa berat badan kamu? (kilo gram)\n";
    cin >> bb;
    cout << "Berapa Tinggi Badan Kamu? (meter)\n";
    cin >> tb;

    a=bb/(tb*tb);
    if(a<18.5){
        cout << "BMI kamu adalah ("<<a<<"),kamu Underweigth!";
    } else if(a>=18.5 && a<=25){
        cout << "BMI kamu adalah ("<<a<<"),kamu Normal!";
    } else if(a>=25 && a<=30){
        cout << "BMI kamu adalah ("<<a<<"),kamu Overweigth!";
    } else if(a>30){
        cout << "BMI kamu adalah ("<<a<<"),kamu Obesitas!";
    }
}