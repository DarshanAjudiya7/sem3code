#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *data;
    int len;
public:
    String(const char *s=""){ len=strlen(s); data=new char[len+1]; strcpy(data,s); }
    String(const String &o){ len=o.len; data=new char[len+1]; strcpy(data,o.data); }
    ~String(){ delete[] data; }
    // s3 = s1 + s2
    String operator+(const String &o) const{
        String r;
        r.len = len + o.len;
        r.data = new char[r.len+1];
        strcpy(r.data,data); strcat(r.data,o.data);
        return r;
    }
    // s4 = s1 + 4
    String operator+(int skip) const{
        if(skip>len) skip=len;
        return String(data+skip);
    }
    String& operator=(const String &o){
        if(this!=&o){ delete[] data; len=o.len; data=new char[len+1]; strcpy(data,o.data);} return *this;
    }
    void display(){ cout<<data; }
};

int main(){
    String s1("Hello"), s2("World");
    String s3 = s1 + s2;
    s3.display(); cout<<"\n";
    String s4 = s1 + 2;
    s4.display(); cout<<"\n";
    String s5("Test");
    String s6 = s5;
    s6.display(); cout<<"\n";
    return 0;
}