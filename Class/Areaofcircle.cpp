#include <iostream>
using namespace std;
class Circle
{
    double r;

public:
    void getr(double);
    double getarea();
};
void Circle::getr(double x)
{
    r = x;
}
double Circle::getarea()
{
    double a = 3.14 * r * r;
    return (a);
}
int main()
{
    double r1;
    cout << "\nEnter the radius: ";
    cin >> r1;
    Circle C1;
    C1.getr(r1);
    double a1 = C1.getarea();
    cout << "\nThe area is: " << a1;
}