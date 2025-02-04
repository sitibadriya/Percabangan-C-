#include <iostream>
using namespace std;
int main(){

   int x;
 
  cout << "Masukkan sebuah bilangan bulat: ";
  cin >> x;
 
  if (x % 2 == 0) {
    cout << x << " adalah bilangan genap";
  }
  else {
    cout << x << " adalah bilangan ganjil";
  }
 
  cout << endl;
  return 0;
}