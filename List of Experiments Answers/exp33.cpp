#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char ch;
    ifstream in("input.txt", ios::binary);
    ofstream out("enc.txt", ios::binary);
    while(in.get(ch)){
        ch ^= 0xFF; // simple XOR
        out.put(ch);
    }
    in.close(); out.close();
    // decrypt
    ifstream in2("enc.txt", ios::binary);
    ofstream out2("dec.txt", ios::binary);
    while(in2.get(ch)){
        ch ^= 0xFF;
        out2.put(ch);
    }
    return 0;
}