#include <iostream>
using namespace std;

class Example
{
    int a;

public:
    void geta(int);
    void show();
    void display(Example);
    friend Example sum(Example, Example);
};
void Example::display(Example E)
{
    cout << "The sum is: " << E.a << endl;
}
void Example::geta(int x)
{
    a = x;
}
void Example::show()
{
    cout << a << endl;
}
Example sum(Example E1, Example E2)
{
    Example S;
    S.a = E1.a + E2.a;
    return S;
}
int main()
{
    Example A, B;
    A.geta(10);
    A.show();
    B.geta(20);
    B.show();
    Example R = sum(A, B);
    R.display(R);
}