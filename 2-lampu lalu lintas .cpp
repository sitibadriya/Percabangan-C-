#include<iostream>
using namespace std;
int main() {
   // Deklarasi
   string warnalampu;
   // Input
   cout << "Masukkan warna lampu lalu lintas: ";
   cin >> warnalampu;

   // Proses
   if (warnalampu == "merah") {
       cout << "Berhenti!" << endl;
   } else if (warnalampu == "kuning" ) {
       cout << "Bersiap!" << endl;
   } else if (warnalampu == "hijau") {
       cout << "Jalan!" << endl;
   } else {
       cout << "Warna tidak valid!" << endl;
    
}
return 0;
}