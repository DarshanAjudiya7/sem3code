#include <iostream>
using namespace std;

class DB {
    int feet, inches;
public:
    DB(int f=0,int i=0): feet(f), inches(i) {}
    DB operator+(const DB &o) const {
        DB r;
        r.inches = inches + o.inches;
        r.feet = feet + o.feet + r.inches/12;
        r.inches %= 12;
        return r;
    }
    DB operator+(int in) const {
        DB r = *this;
        r.inches += in;
        r.feet += r.inches/12;
        r.inches %= 12;
        return r;
    }
    void display() const { cout<<feet<<"ft "<<inches<<"in"<<endl; }
};

int main(){
    DB d1(5,8), d2(3,11);
    DB d3 = d1 + d2;
    d3.display();
    DB d4 = d1 + 5;
    d4.display();
    return 0;
}