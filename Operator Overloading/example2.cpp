#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example(int, int);
    void display();
    Example sum(Example &);
};
Example::Example(int x, int y)
{
    a = x;
    b = y;
}
void Example::display()
{
    cout << a << " " << b << endl;
}
Example Example::sum(Example &E1)
{
    Example S(0, 0);
    S.a = a + E1.a;
    S.b = b + E1.b;
    return S;
}
int main()
{
    Example A(10, 20);
    A.display();
    Example B(100, 200);
    B.display();
    Example C(0, 0);
    C = A.sum(B);
    C.display();
}