#include<iostream>
using namespace std;
int main() {
   int pilihan, bilangan1, bilangan2, total;
   cout << "Masukkan bilangan pertama : ";
   cin >> bilangan1;
   cout << "Masukkan bilangan kedua : ";
   cin >> bilangan2;
   
   cout << "Menu Matematika" << endl;
   cout << "1. Penjumlahan" << endl;
   cout << "2. Pengurangan" << endl;
   cout << "3. Pembagian" << endl;
   cout << "4. Perkalian" << endl;
   cout << "Masukkan pilihan Anda : ";
   cin >> pilihan;
   
   if (pilihan == 1) {
       total = bilangan1 + bilangan2;
       cout << "Hasil operasi : " << total << endl;
   }else if (pilihan == 2){
           total = bilangan1 - bilangan2;
       cout << "Hasil operasi : " << total << endl;
       } else if (pilihan == 3){
           total = bilangan1 / bilangan2;
       cout << "Hasil operasi : " << total << endl;
       }else if (pilihan == 4){
           total = bilangan1 * bilangan2;
       cout << "Hasil operasi : " << total << endl;
       
   }
  return 0;
   }