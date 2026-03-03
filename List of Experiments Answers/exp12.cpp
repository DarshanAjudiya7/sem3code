#include <iostream>
#include <vector>
using namespace std;

class Vector {
    vector<double> v;
public:
    Vector(int n=0) : v(n) {}
    void init() {
        for(size_t i=0;i<v.size();++i) { cout<<"v["<<i<<"]="; cin>>v[i]; }
    }
    void modify(int idx,double val) { if(idx>=0 && idx<v.size()) v[idx]=val; }
    void multiply(double s) { for(auto &x:v) x*=s; }
    Vector operator+(const Vector &o) const {
        Vector r(v.size());
        for(size_t i=0;i<v.size();++i) r.v[i]=v[i]+o.v[i];
        return r;
    }
    void display() const { for(auto x:v) cout<<x<<" "; cout<<"\n"; }
};

int main(){
    Vector a(3), b(3);
    a.init(); b.init();
    a.multiply(2);
    Vector c = a + b;
    c.display();
    return 0;
}