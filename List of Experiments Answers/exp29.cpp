#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main(){
    int N,limit1,limit2;
    cout<<"N limit1 limit2: ";cin>>N>>limit1>>limit2;
    int largest = limit1;
    for(int i=0;i<N;i++){
        int x; cin>>x;
        try{
            if(x<limit1||x>limit2) throw runtime_error("out of range");
            if(x>largest) largest=x;
        } catch(...) {
            cout<<"Discarded "<<x<<"\n";
        }
    }
    cout<<"Largest="<<largest<<"\n";
    return 0;
}