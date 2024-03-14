#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
struct data_alamat{
    string nama_jalan;
    string kota;
};

class data_mhs{
    string nama, nim;
    char kom;
    data_alamat alamat;
    int nilai_tugas;
    public :
    data_mhs();
    void output_data();
};

data_mhs :: data_mhs(){
    cout << "Nama : ";
    getline(cin,nama);
    cout << "NIM : ";
    cin >> nim;
    cout << "Kom : ";
    cin >> kom;
    cout << "Alamat : " <<endl;
        cout << "Jalan : ";
    cin >> alamat.nama_jalan;
    cout << "Kota : ";
    cin >> alamat.kota;
    cout << "Semua data telah di input" << endl << endl;
}

void data_mhs::output_data (){
    cout << "Nama   : " << nama << endl;
    cout << "NIM    : " << nim << endl;
    cout << "Kom    : " << kom << endl;
    cout << "Alamat : " << endl;
    cout << "Jalan  : " << alamat.nama_jalan << endl;
    cout << "Kota   : " << alamat.kota << endl;
}

int main (){
    system("cls");
    data_mhs mhs;
    system("cls");
    mhs.output_data();
    return 0;
}