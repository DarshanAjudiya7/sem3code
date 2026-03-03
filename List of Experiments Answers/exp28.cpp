#include <iostream>
#include <string>
using namespace std;

class Account { public:
    string name; int accNo; 
    virtual void deposit(double)=0;
    virtual void withdraw(double)=0;
    virtual void display()=0;
    virtual ~Account(){}
};

class SavAcct : public Account {
    double balance;
public:
    SavAcct(string n,int a,double b):balance(b){name=n;accNo=a;}
    void deposit(double x){balance+=x;}
    void withdraw(double x){ if(x<=balance) balance-=x; }
    void display(){ cout<<"Sav "<<name<<" "<<balance<<"\n";} 
};

class CurAcct : public Account {
    double balance; double minBal;
public:
    CurAcct(string n,int a,double b,double m):balance(b),minBal(m){name=n;accNo=a;}
    void deposit(double x){balance+=x;}
    void withdraw(double x){ if(x<=balance) balance-=x; if(balance<minBal) { balance-=25; cout<<"Penalty imposed\n";} }
    void display(){ cout<<"Cur "<<name<<" "<<balance<<"\n";} 
};

int main(){
    Account *p1=new SavAcct("Alice",1,1000);
    Account *p2=new CurAcct("Bob",2,500,100);
    p1->deposit(100); p2->withdraw(450);
    p1->display(); p2->display();
    delete p1; delete p2;
    return 0;
}