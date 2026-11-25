#include <iostream>
using namespace std;
class Example
{
    int a;

public:
    Example(int);
    void display();
    Example operator++();
};
Example::Example(int x)
{
    a = x;
}
void Example::display()
{
    cout << a << endl;
}
Example Example::operator++()
{
    Example E2(0);
    E2.a = ++a;
    return (E2);
}
int main()
{
    Example A(10);
    cout << "Before Pre Increment" << endl;
    A.display();
    Example B(0);
    B = ++A;
    cout << "After Pre Increment" << endl;
    B.display();
    A.display();
    return 0;
}