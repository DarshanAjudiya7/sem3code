#include <iostream>
using namespace std;

int main() {
    int id, qty;
    double price;
    cout << "Product id: "; cin >> id;
    cout << "Quantity: "; cin >> qty;
    cout << "Price: "; cin >> price;
    double total = qty * price;
    cout << "ID=" << id << " qty=" << qty << " price=" << price << " total=" << total << endl;
    return 0;
}