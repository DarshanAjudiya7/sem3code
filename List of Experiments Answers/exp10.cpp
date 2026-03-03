#include <iostream>
#include <algorithm>
using namespace std;

class Number {
    int arr[100];
    int n;
public:
    Number(int sz=0): n(sz) {}
    void init() {
        cout << "Enter size:";
        cin >> n;
        cout << "Enter elements:";
        for(int i=0;i<n;i++) cin>>arr[i];
    }
    void display() const {
        for(int i=0;i<n;i++) cout<<arr[i]<<" "; cout<<"\n";
    }
    int findMax() const { return *max_element(arr, arr+n); }
    int findMin() const { return *min_element(arr, arr+n); }
    void sortArr() { sort(arr, arr+n); }
};

int main() {
    Number num;
    num.init();
    num.display();
    cout << "Max="<<num.findMax()<<" Min="<<num.findMin()<<"\n";
    num.sortArr();
    cout << "Sorted:";
    num.display();
    return 0;
}