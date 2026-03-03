#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student { public: int id; string name; double marks; };

int main(){
    int n;
    cout<<"Enter n: "; cin>>n;
    Student *arr = new Student[n];
    for(int i=0;i<n;i++){
        cout<<"id name marks: "; cin>>arr[i].id>>arr[i].name>>arr[i].marks;
    }
    ofstream out("students.dat");
    for(int i=0;i<n;i++) out<<arr[i].id<<" "<<arr[i].name<<" "<<arr[i].marks<<"\n";
    out.close();
    cout<<"Reading file:\n";
    ifstream in("students.dat");
    while(in>>arr[0].id>>arr[0].name>>arr[0].marks)
        cout<<arr[0].id<<" "<<arr[0].name<<" "<<arr[0].marks<<"\n";
    delete[] arr;
    return 0;
}