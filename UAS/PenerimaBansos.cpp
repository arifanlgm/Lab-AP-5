#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Warga {
    string nama;
    string alamat;
    int pendapatan;
    bool statusBansos;
    string nik;
    string noKartuKeluarga;
};

class Desa {
private:
    vector<Warga*> warga; // Use a vector of pointers to Warga

public:
    ~Desa(); // Destructor
    void tambahWarga(Warga* wargaBaru);
    void hapusWarga(string nama);
    void ubahStatusBansos(string nama, bool statusBaru);
    void tampilkanDataWarga();
    void tampilkanKartuBansos(string nama);
    int jumlahWargaBansos();
};

Desa::~Desa() {
    for (Warga* w : warga) {
        delete w;
    }
}

void Desa::tambahWarga(Warga* wargaBaru) {
    warga.push_back(wargaBaru);
}

void Desa::hapusWarga(string nama) {
    auto it = find_if(warga.begin(), warga.end(), [&](Warga* w) { return w->nama == nama; });
    if (it != warga.end()) {
        delete *it;  // Free the memory allocated for the Warga
        warga.erase(it);
        cout << "Warga dengan nama " << nama << " berhasil dihapus." << endl;
    } else {
        cout << "Warga dengan nama " << nama << " tidak ditemukan." << endl;
    }
}

void Desa::ubahStatusBansos(string nama, bool statusBaru) {
    auto it = find_if(warga.begin(), warga.end(), [&](Warga* w) { return w->nama == nama; });
    if (it != warga.end()) {
        (*it)->statusBansos = statusBaru;
        cout << "Status bansos warga dengan nama " << nama << " berhasil diubah." << endl;
    } else {
        cout << "Warga dengan nama " << nama << " tidak ditemukan." << endl;
    }
}

void Desa::tampilkanDataWarga() {
    cout << "Daftar Warga:" << endl;
    for (Warga* w : warga) {
        cout << "Nama               : " << w->nama << endl;
        cout << "Alamat             : " << w->alamat << endl;
        cout << "Pendapatan         : " << w->pendapatan << endl;
        cout << "NIK                : " << w->nik << endl;
        cout << "No. Kartu Keluarga : " << w->noKartuKeluarga << endl;
        cout << "Status Bansos      : " << (w->statusBansos ? "Ya" : "Tidak") << endl;
        cout << endl;
    }
}

void Desa::tampilkanKartuBansos(string nama) {
    auto it = find_if(warga.begin(), warga.end(), [&](Warga* w) { return w->nama == nama && w->statusBansos; });
    while (it == warga.end()) {
        cout << "Warga dengan nama " << nama << " tidak ditemukan atau tidak menerima bansos." << endl;
        cout << "Masukkan nama warga untuk mencetak kartu bansos: ";
        getline(cin, nama);
        it = find_if(warga.begin(), warga.end(), [&](Warga* w) { return w->nama == nama && w->statusBansos; });
    }
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "=====================================" << endl;
    cout << "           KARTU BANSOS              " << endl;
    cout << "=====================================" << endl;
    cout << "Nama   : " << (*it)->nama << endl;
    cout << "Alamat : " << (*it)->alamat << endl;
    cout << "NIK    : " << (*it)->nik << endl;
    cout << "No. KK : " << (*it)->noKartuKeluarga << endl;
    cout << "=====================================" << endl;
}

void tampilkanMenu() {
    cout << "========== Menu ==========" << endl;
    cout << "1. Tambah Warga" << endl;
    cout << "2. Cetak Kartu Bansos" << endl;
    cout << "3. Keluar" << endl;
    cout << "==========================" << endl;
    cout << "Pilih menu: ";
}

void tampilkanOpsiLanjutkan() {
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "1. Lanjutkan | 0. Keluar" << endl;
}

int main() {
    system("cls");
    
    Desa desa;
    int pilihan;

    do {
        tampilkanMenu();
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1: {
                Warga* wargaBaru = new Warga;
                cout << "Masukkan nama                  : ";
                getline(cin, wargaBaru->nama);
                cout << "Masukkan alamat                : ";
                getline(cin, wargaBaru->alamat);
                cout << "Masukkan pendapatan            : ";
                cin >> wargaBaru->pendapatan;
                cin.ignore();
                cout << "Masukkan NIK                   : ";
                getline(cin, wargaBaru->nik);
                cout << "Masukkan nomor Kartu Keluarga  : ";
                getline(cin, wargaBaru->noKartuKeluarga);
                cout << "Masukkan status bansos (1 untuk Ya, 0 untuk Tidak): ";
                cin >> wargaBaru->statusBansos;
                cin.ignore();

                desa.tambahWarga(wargaBaru);
                break;
            }
            case 2: {
                string nama;
                cout << "Masukkan nama warga : ";
                getline(cin, nama);
                desa.tampilkanKartuBansos(nama);

                int opsi;
                do {
                    tampilkanOpsiLanjutkan();
                    cin >> opsi;
                    cin.ignore();

                    if (opsi == 1) {
                        break;
                    } else if (opsi == 0) {
                        cout << "Keluar dari program." << endl;
                        return 0;
                    } else {
                        cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                    }
                } while (opsi != 1 && opsi != 2);

                break;
            }
            case 3: {
                cout << "Keluar dari program." << endl;
                break;
            }
            default: {
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
            }
        }
    } while (pilihan != 0 && pilihan != 3);

    return 0;
}
