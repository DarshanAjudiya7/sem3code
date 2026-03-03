#include <iostream>
#include <string>
using namespace std;

class Bank {
public:
    string name;
    int accNo;
    Bank(string n="",int a=0):name(n),accNo(a){}
    void display(){ cout<<name<<" "<<accNo<<"\n"; }
};

class Saving : public Bank {
public:
    double balance;
    Saving(string n="",int a=0,double b=0):Bank(n,a),balance(b){}
    void display(){ Bank::display(); cout<<"Balance="<<balance<<"\n"; }
};

int main(){
    Saving s("Alice",1,1000);
    s.display();
    return 0;
}