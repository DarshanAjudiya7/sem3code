#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Buffer {
    vector<T> buf;
public:
    Buffer(int n=0):buf(n){}
    void init(){ for(size_t i=0;i<buf.size();++i) cin>>buf[i]; }
    T minVal(){ T m=buf[0]; for(auto &x:buf) if(x<m) m=x; return m; }
    T maxVal(){ T m=buf[0]; for(auto &x:buf) if(x>m) m=x; return m; }
    double avg(){ double s=0; for(auto &x:buf) s+=x; return s/buf.size(); }
    void zeroNeg(){ for(auto &x:buf) if(x<0) x=0; }
};

int main(){
    Buffer<int> b(5);
    b.init();
    cout<<b.minVal()<<" "<<b.maxVal()<<" "<<b.avg()<<"\n";
    b.zeroNeg();
    return 0;
}