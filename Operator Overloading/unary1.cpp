#include <iostream>
using namespace std;
class Example
{
    int a;

public:
    Example(int);
    void display();
    Example operator-();
};
Example::Example(int x)
{
    a = x;
}
void Example::display()
{
    cout << a << endl;
}
Example Example::operator-()
{
    Example E2(0);
    E2.a = -a;
    return (E2);
}
int main()
{
    Example A(10);
    A.display();
    Example B(0);
    B = -A;
    B.display();
    return 0;
}