#include <iostream>
using namespace std;
class Example
{
    int a;

public:
    void getdata(int);
    void display();
    Example operator-();
};
void Example::getdata(int x)
{
    a = x;
}
void Example::display()
{
    cout << a << endl;
}
Example Example::operator-()
{
    Example E2;
    E2.a = -a;
    return (E2);
}
int main()
{
    Example A;
    A.getdata(10);
    A.display();
    Example B;
    B = -A;
    B.display();
    return 0;
}