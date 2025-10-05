/*
Nama Program : Latihan sesi 1 soal 1
Nama         : Nur Faiha Ghina Aulia
NPM          : 140810250068
Tanggal Buat : 26 September 2025
Deskripsi    : menghitung tegangan yang dihasilkan
*/

#include <iostream>
using namespace std;

int main() {
    int arus, hambatan;
    cout << "Masukkan arus (dalam Ampere): " << endl;
    cin >> arus;
    cout << "Masukkan hambatan (dalam Ohm): " << endl;
    cin >> hambatan;

    cout << arus * hambatan << " volt" << endl;
}