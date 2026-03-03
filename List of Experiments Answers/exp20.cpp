#include <iostream>
#include <string>
using namespace std;

class Animal {
    string name;
    double speed;
public:
    Animal(string n="", double s=0): name(n), speed(s) {}
    void display() const { cout<<name<<" "<<speed<<"\n"; }
    bool operator<=(const Animal &o) const { return speed <= o.speed; }
    Animal operator++(int){ Animal t=*this; speed++; return t; }
    Animal& operator++(){ speed++; return *this; }
};

int main(){
    Animal a("Cat",10), b("Dog",12);
    cout<<(a<=b)<<"\n";
    a++; ++b;
    a.display(); b.display();
    return 0;
}