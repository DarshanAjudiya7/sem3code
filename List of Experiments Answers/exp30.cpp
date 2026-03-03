#include <iostream>
using namespace std;

template<typename T>
class matrix_class {
    T m[3][3];
public:
    matrix_class(){ }
    matrix_class<T> operator+(const matrix_class<T> &o) const {
        matrix_class<T> r;
        for(int i=0;i<3;i++) for(int j=0;j<3;j++) r.m[i][j]=m[i][j]+o.m[i][j];
        return r;
    }
    int count_smallest() const {
        T minv=m[0][0]; int cnt=1;
        for(int i=0;i<3;i++) for(int j=0;j<3;j++){
            if(i==0&&j==0) continue;
            if(m[i][j]<minv){ minv=m[i][j]; cnt=1; }
            else if(m[i][j]==minv) cnt++;
        }
        return cnt;
    }
};

int main(){
    matrix_class<int> a;
    // usage omitted
    return 0;
}