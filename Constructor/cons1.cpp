#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example();
    void display();
};
void Example::display()
{
    cout << a << " " << b << endl;
}
Example::Example()
{
    a = 10;
    b = 20;
}
int main()
{
    Example E1;
    E1.display();
}