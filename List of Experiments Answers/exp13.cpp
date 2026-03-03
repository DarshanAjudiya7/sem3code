#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
public:
    string author, title, publisher;
    double price;
    int stock;
    Book(string a, string t, string p, double pr, int st): author(a), title(t), publisher(p), price(pr), stock(st) {}
};

int main(){
    vector<Book> inv;
    inv.emplace_back("Auth1","Title1","Pub1",100,5);
    // operations omitted for brevity
    cout<<"Inventory size="<<inv.size()<<"\n";
    return 0;
}