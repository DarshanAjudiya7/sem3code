#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    Time(int hh = 0, int mm = 0, int ss = 0) : h(hh), m(mm), s(ss) {}
    void display() { cout << h << ":" << m << ":" << s << "\n"; }
    friend Time operator+(const Time &a, const Time &b)
    {
        Time r;
        r.s = a.s + b.s;
        r.m = a.m + b.m + r.s / 60;
        r.s %= 60;
        r.h = a.h + b.h + r.m / 60;
        r.m %= 60;
        return r;
    }
    friend Time operator+(int x, const Time &a)
    {
        Time r = a;
        r.s += x;
        r.m += r.s / 60;
        r.s %= 60;
        r.h += r.m / 60;
        r.m %= 60;
        return r;
    }
    Time operator++(int)
    {
        Time t = *this;
        *this = *this + Time(0, 0, 1);
        return t;
    }
    Time &operator++()
    {
        *this = *this + Time(0, 0, 1);
        return *this;
    }
};

int main()
{
    Time t1(1, 20, 30), t2(2, 40, 50);
    Time t3 = t1 + t2;
    t3.display();
    Time t4 = 2 + t3;
    t4.display();
    Time t5 = t2++;
    Time t6 = ++t2;
    t5.display();
    t6.display();
    return 0;
}