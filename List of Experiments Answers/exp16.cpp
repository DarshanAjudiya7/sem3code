#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
    string name;
    int accNo;
    string type;
    double balance;
    static int nextId;
public:
    BankAccount(string n, string t, double b): name(n), type(t), balance(b) { accNo = nextId++; }
    void deposit(double a){ balance += a; }
    void withdraw(double a){ if(a <= balance) balance -= a; }
    void display() const { cout<<name<<" "<<accNo<<" "<<balance<<"\n"; }
    double getBalance() const { return balance; }
};
int BankAccount::nextId = 1;

int main(){
    vector<BankAccount> arr;
    arr.emplace_back("Alice","S",500);
    arr.emplace_back("Bob","C",1500);
    for(auto &a:arr) a.display();
    cout<<"Customers with balance<1000:\n";
    for(auto &a:arr) if(a.getBalance()<1000) a.display();
    return 0;
}