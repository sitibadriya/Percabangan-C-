#include<iostream>
using namespace std;
int main() {
   // Deklarasi
   int usia;
   // Input
   cout << "Masukkan usia: ";
   cin >> usia;

   // Proses
   if (usia >= 0 && usia <= 5) {
       cout << "Balita" << endl;
   } else { 
    if (usia >= 6 && usia <= 12) {
       cout << "Anak-anak" << endl;
   } else {
    if (usia >= 13 && usia <= 17) {
       cout << "Remaja" << endl;
    } else {
    if (usia >= 18 && usia <= 59) {
       cout << "Dewasa" << endl; 
    } else {
    if (usia >= 60) {
       cout << "Lansia" << endl;
   } else {
       cout << "Usia tidak valid " << endl;
   }
}
}
}
  return 0;
   }
}