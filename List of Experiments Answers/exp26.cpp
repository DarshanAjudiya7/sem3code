#include <iostream>
using namespace std;

// Placeholder for unspecified figure; simple database example
class Entity { public: int id; string name; };

int main(){
    Entity e;
    e.id=1; e.name="Sample";
    cout<<e.id<<" "<<e.name<<"\n";
    return 0;
}