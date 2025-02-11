#include<iostream>
using namespace std;
int main() {
   // Deklarasi
   string jenisanggota;
   int latihan, sisalatihan;
   string member;
   
   // Input
   cout << "Masukkan jenis member: ";
   cin >> member;
   cout << "Masukkan jumlah latihan yang dilakukan: ";
   cin >> latihan;

   // Proses
   if (member == "silver") {
    sisalatihan = 10 - latihan; 
    if (sisalatihan == 0) {
    cout << "Anda sudah tidak bisa latihan lagi";
   } else if (sisalatihan < 0) {
   cout << "Anda telah melebihi batas";
   } else {
       cout << "Anda masih bisa latihan sebanyak : " << sisalatihan << " kali";
   }
    } else if (member == "gold") {
    sisalatihan = 20 - latihan; 
    if (sisalatihan == 0) {
    cout << "Anda sudah tidak bisa latihan lagi";
   } else if (sisalatihan < 0) {
   cout << "Anda telah melebihi batas";
   } else {
       cout << "Anda masih bisa latihan sebanyak : " << sisalatihan << " kali";
   }
    } else if (member == "platinum") {
       cout << "Tidak terbatas, silahkan latihan sepuasnya";
   }
  return 0;
   }