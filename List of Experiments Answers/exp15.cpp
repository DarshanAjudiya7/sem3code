#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *data;
    int len;
public:
    String(const char *s="") {
        len = strlen(s);
        data = new char[len+1];
        strcpy(data, s);
    }
    ~String() { delete[] data; }
    String operator+(const String &o) const {
        String r;
        r.len = len + o.len;
        r.data = new char[r.len+1];
        strcpy(r.data, data);
        strcat(r.data, o.data);
        return r;
    }
    void display() const { cout<<data; }
};

int main(){
    String a("Hello"), b("World");
    String c = a + b;
    c.display();
    return 0;
}