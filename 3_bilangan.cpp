#include<iostream>
using namespace std;
int main() {
   // Deklarasi
   double bil1, bil2, hasilbagi;

   // Input
   cout << "Masukkan nilai bilangan pertama: ";
   cin >> bil1;
   cout << "Masukkan nilai bilangan kedua: ";
   cin >> bil2;

   // Proses
   if (bil2 == 0) {
       cout << "Division by zero";
   } 
   else{
    hasilbagi = bil1/bil2;
       cout << "Hasil bagi bilangan 1 dan 2 adalah " << hasilbagi << endl;
       return 0;
   }
}