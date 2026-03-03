#include <iostream>
#include <vector>
using namespace std;

class Matrix {
    int rows, cols;
    double **data;
public:
    Matrix(int r,int c): rows(r), cols(c) {
        data = new double*[r];
        for(int i=0;i<r;i++) data[i]=new double[c]();
    }
    ~Matrix(){ for(int i=0;i<rows;i++) delete[] data[i]; delete[] data; }
    void set(int i,int j,double v){ if(i<rows&&j<cols) data[i][j]=v; }
    pair<double,pair<int,int>> find_max(){
        double mv=data[0][0]; int mi=0,mj=0;
        for(int i=0;i<rows;i++) for(int j=0;j<cols;j++) if(data[i][j]>mv){ mv=data[i][j]; mi=i; mj=j; }
        return {mv,{mi,mj}};
    }
    void display(){ for(int i=0;i<rows;i++){ for(int j=0;j<cols;j++) cout<<data[i][j]<<" "; cout<<"\n";} }
    Matrix multiply(const Matrix &o){
        Matrix res(rows,o.cols);
        for(int i=0;i<rows;i++) for(int j=0;j<o.cols;j++){
            double sum=0;
            for(int k=0;k<cols;k++) sum+=data[i][k]*o.data[k][j];
            res.data[i][j]=sum;
        }
        return res;
    }
};

int main(){
    Matrix m1(2,2), m2(2,2);
    m1.set(0,0,1); m1.set(0,1,2); m1.set(1,0,3); m1.set(1,1,4);
    m2.set(0,0,5); m2.set(0,1,6); m2.set(1,0,7); m2.set(1,1,8);
    Matrix m3 = m1.multiply(m2);
    m3.display();
    auto mx = m1.find_max();
    cout<<"Max="<<mx.first<<" at "<<mx.second.first<<","<<mx.second.second<<"\n";
    return 0;
}