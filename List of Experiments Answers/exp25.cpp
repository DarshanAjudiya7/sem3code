#include <iostream>
#include <string>
#include <vector>
using namespace std;

class College { public: string name; string type; };
class Department : public College {
public:
    string dept_name;
    int no_of_faculty;
    Department(const string &cname, const string &ctype, const string &dname, int faculty)
        : College{cname, ctype}, dept_name(dname), no_of_faculty(faculty) {}
};

int main(){
    vector<Department> deps;
    deps.push_back({"C1","Govt","CS",20});
    deps.push_back({"C1","Govt","EE",10});
    for(auto &d:deps){
        if(d.no_of_faculty>15){
            cout<<d.name<<" "<<d.dept_name<<" "<<d.no_of_faculty<<"\n";
        }
    }
    return 0;
}