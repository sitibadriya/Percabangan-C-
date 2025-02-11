#include<iostream>
using namespace std;
int main()
{
    double sisi, tinggi, jarijari, luas, volume;
    int pilihan;
    
    cout << "Bangun datar yang dipilih: " << endl;
    cout << "1. Menghitung volume kubus" << endl;
    cout << "2. Menghitung luas lingkaran" << endl;
    cout << "3. Menghitung volume silinder" << endl;
    cout << "4. Program telah selesai" << endl;
    cout << "Pilih angka (1-4): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
        cout << "Pilihan 1 : Menghitung volume kubus" << endl;
        cout << "Masukkan panjang sisi kubus: ";
        cin >> sisi;
        volume = (sisi * sisi * sisi);
        cout << "Volume kubus adalah " << volume << " cm" << endl;
        break;
        case 2:
        cout << "Pilihan 2 : Menghitung luas lingkaran" << endl;
        cout << "Masukkan jarijari: ";
        cin >> jarijari;
        luas = 3.14 * jarijari * jarijari;
        cout << "Luas Lingkaran adalah " << luas << " cm" << endl;
        case 3:
        cout << "Pilihan 3 : Menghitung volume silinder" << endl;
        cout << "Masukkan jarijari: ";
        cin >> jarijari;
        volume = 3.14 * jarijari * jarijari * tinggi;
        cout << "Luas Lingkaran adalah " << volume << " cm" << endl;
        case 4:
        cout << "Program telah selesai" << endl;
    }
return 0;
}