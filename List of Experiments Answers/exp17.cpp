#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *data;
    int len;
public:
    String(const char *s=""){
        len=strlen(s);
        data=new char[len+1]; strcpy(data,s);
    }
    String(const String &o){ len=o.len; data=new char[len+1]; strcpy(data,o.data); }
    ~String(){ delete[] data; }
    void replaceAll(const char *find, const char *rep){
        // simplistic implementation omitted for brevity
    }
    void display(){ cout<<data; }
};

void reverse(char *str, int count=-1){
    if(count==-1) count=strlen(str);
    for(int i=0;i<count/2;i++) swap(str[i], str[count-1-i]);
}

int main(){
    char s[100]="HelloWorld";
    reverse(s);
    cout<<s<<"\n";
    return 0;
}