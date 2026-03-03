#include <iostream>
#include <vector>
using namespace std;

class Bank {
    int accNo;
    string custName;
    string type;
    double balance;
public:
    Bank(int a, string n, string t, double b): accNo(a), custName(n), type(t), balance(b) {}
    void withdraw(double amt) { if(amt<=balance) balance -= amt; }
    void deposit(double amt) { balance += amt; }
    void showBalance() const { cout<<"Acc:"<<accNo<<" Name:"<<custName<<" Bal:"<<balance<<"\n"; }
};

int main() {
    vector<Bank> arr;
    arr.emplace_back(1,"Alice","S",1000);
    arr.emplace_back(2,"Bob","C",2000);
    for(auto &b:arr) { b.showBalance(); }
    return 0;
}