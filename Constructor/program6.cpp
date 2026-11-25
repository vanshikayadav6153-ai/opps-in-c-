#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example(int, int);
    void display();
};
Example::Example(int x, int y = 20)
{
    a = x;
    b = y;
}
void Example::display()
{
    cout << a << " " << b << endl;
}
int main()
{
    Example E1(10, 20);
    E1.display();
    Example E2(100);
    E2.display();
}