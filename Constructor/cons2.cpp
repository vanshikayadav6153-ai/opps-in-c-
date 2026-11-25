#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example(int, int);
    void display();
};
void Example::display()
{
    cout << a << " " << b << endl;
}
Example::Example(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    Example E1(10, 20);            // Implicitly Invoked
    Example E2 = Example(50, 100); // Explicitly Invoked
    E1.display();
    E2.display();
}