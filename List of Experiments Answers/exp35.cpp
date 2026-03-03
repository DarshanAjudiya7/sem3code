#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string s_name;
    int s_id;
    int s_sem;
    string s_college;
};

istream& operator>>(istream &in, Student &s) {
    in >> s.s_name >> s.s_id >> s.s_sem >> s.s_college;
    return in;
}

ostream& operator<<(ostream &out, const Student &s) {
    out << s.s_name << " " << s.s_id << " " << s.s_sem << " " << s.s_college;
    return out;
}

int main(){
    Student s;
    cout << "Enter student details: ";
    cin >> s;
    cout << "You entered: " << s << endl;
    return 0;
}