#include <iostream>
using namespace std;
class Example
{
    int a;

public:
    Example(int);
    void display();
    friend Example operator-(Example);
};
Example::Example(int x)
{
    a = x;
}
void Example::display()
{
    cout << a << endl;
}
Example operator-(Example E1)
{
    Example E2(0);
    E2.a = -E1.a;
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
