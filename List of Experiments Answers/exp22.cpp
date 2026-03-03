#include <iostream>
using namespace std;

class A { public: int x; A(int v=0):x(v){} };
class B { public: int y; B(int v=0):y(v){} };

int maxOf(const A &a, const B &b) {
    return (a.x > b.y) ? a.x : b.y;
}

int main(){
    A a(5); B b(7);
    cout<<"Max="<<maxOf(a,b)<<"\n";
    return 0;
}