#include<iostream>
using namespace std;
int main() {
   // Deklarasi
   string jenisanggota;
   int latihan;
   int sisalatihan;
   
   // Input
   cout << "Masukkan jenis keanggotaan: ";
   cin >> jenisanggota;
   cout << "Masukkan jumlah latihan yang dilakukan: ";
   cin >> latihan;

   // Proses
   if (jenisanggota == "gold") {
    sisalatihan = 20 - latihan; 
    cout << "Anda masih bisa latihan " << sisalatihan << "x lagi bulan ini" << endl;
   } else {
       if (jenisanggota == "silver") {
    sisalatihan = 10 - latihan;
    cout << "Anda masih bisa latihan " << sisalatihan << "x lagi bulan ini" << endl;
    } else {
    if (jenisanggota == "platinum") {
    cout << "Tidak Terbatas" << endl;
   }
}
}
  return 0;
   }