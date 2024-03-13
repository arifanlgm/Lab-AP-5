#include <iostream>
using namespace std;

int main(){
    string inigetline;
    system("cls");
    cout << "Pada dasarnya syntax getline dan cin memiliki prinsip yang sama, namun jika diperhatikan: \n";
    cout << "==========================================================================================\n" << endl;
    cout << "Masukkan sebuah kalimat\n";
    getline(cin,inigetline);
    cout << "\nBarusan menggunakan syntax GETLINE, maka yang terbaca/keluar outputnya adalah -> " << inigetline << " <-(semua yang di input)<-\n" << endl;
    cout << "======================================================================================================\n" << endl;

    cout << endl;
    
    string inicin;
    cout << "Sedangkan jika menggunakan CIN\n";
    cout << "Masukkan sebuah kalimat\n";
    cin >> inicin;
    cout << "Yang terbaca/keluar outputnya adalah -> " << inicin << " <- (1 kata di awal saja)" << endl;
}