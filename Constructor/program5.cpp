#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example();
    Example(int, int);
    Example(Example &);
    void display();
};
void Example::display()
{
    cout << a << " " << b << endl;
}
Example::Example()
{
    cout << "Enter the numbers: ";
    cin >> a >> b;
}
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
int main()
{
    Example E1;
    E1.display();
    Example E2(10, 20);
    E2.display();
    Example E3(E1);
    E3.display();
    Example E4(E2);
    E4.display();
}