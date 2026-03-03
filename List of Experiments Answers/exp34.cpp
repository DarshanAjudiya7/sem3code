#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string,string> dir;
    int choice;
    do{
        cout<<"1.Add 2.Update 3.Find 4.Display 5.Exit: "; cin>>choice;
        string name,num;
        switch(choice){
            case 1: cout<<"Name and number: "; cin>>name>>num; dir[name]=num; break;
            case 2: cout<<"Name and new number: "; cin>>name>>num; dir[name]=num; break;
            case 3: cout<<"Name: "; cin>>name; cout<<dir[name]<<"\n"; break;
            case 4: for(auto &p:dir) cout<<p.first<<":"<<p.second<<"\n"; break;
        }
    } while(choice!=5);
    return 0;
}