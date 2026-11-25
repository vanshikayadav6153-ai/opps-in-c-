#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example(int, int);
    Example(Example &);
    void display();
};
Example::Example(int x, int y)
{
    a = x;
    b = y;
}
Example::Example(Example &E)
{
    a = E.a;
    b = E.b;
}
void Example::display()
{
    cout << a << b << endl;
}

int main()
{
    Example E1(10, 20);
    E1.display();
    Example E2(E1);
    E2.display();
}