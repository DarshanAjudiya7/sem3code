#include <iostream>
using namespace std;

class Bank {
public:
    int accountNo;
    double balance;
    Bank(int acc=0, double bal=0): accountNo(acc), balance(bal) {}
    void deposit(double amt) { balance += amt; }
    bool withdraw(double amt) {
        if (amt <= balance) { balance -= amt; return true; }
        return false;
    }
    void display() const { cout << "Acc:" << accountNo << " Bal:" << balance << endl; }
};

int main() {
    Bank b(123, 1000);
    b.display();
    b.deposit(500);
    b.withdraw(200);
    b.display();
    return 0;
}