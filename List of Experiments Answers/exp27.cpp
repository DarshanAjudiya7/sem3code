#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void display_area() = 0;
};
class Rectangle : public Shape
{
    double w, h;

public:
    Rectangle(double w, double h) : w(w), h(h) {}
    void display_area() { cout << "Rect area=" << w * h << "\n"; }
};
class Square : public Shape
{
    double a;

public:
    Square(double a) : a(a) {}
    void display_area() { cout << "Square area=" << a * a << "\n"; }
};
class Triangle : public Shape
{
    double b, h;

public:
    Triangle(double b, double h) : b(b), h(h) {}
    void display_area() { cout << "Tri area=" << 0.5 * b * h << "\n"; }
};

int main()
{
    Shape *s1 = new Rectangle(2, 3);
    Shape *s2 = new Square(4);
    Shape *s3 = new Triangle(3, 4);
    s1->display_area();
    s2->display_area();
    s3->display_area();
    delete s1;
    delete s2;
    delete s3;
    return 0;
}