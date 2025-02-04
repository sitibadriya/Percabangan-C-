#include <iostream>
using namespace std;

int main() {
    float total_pembelian, discount = 0;

    cout << "Masukkan total pembelian: ";
    cin >> total_pembelian;

    if (total_pembelian >= 500000) {
        discount = 0.3 * total_pembelian;
    } else {
    if (total_pembelian >= 200000) {
        discount = 0.2 * total_pembelian;
    } else {
    if (total_pembelian > 100000) {
        discount = 0.1 * total_pembelian;
    } else {
    if (total_pembelian <= 100000) {
        discount = 0;
    }
    }
}
}
    cout << "Besarnya discount = " << discount << endl;
    cout << "Total yang harus dibayar setelah diskon " << total_pembelian - discount << endl;
    return 0;
}