#include <iostream>
using namespace std;
class Example
{
    int a;

public:
    void geta(int);
    Example sum(Example, Example);
    void display(Example);
};
void Example::display(Example E)
{
    cout << "The sum is: " << E.a;
}
void Example::geta(int x)
{
    a = x;
}
Example Example::sum(Example E1, Example E2)
{
    Example S;
    S.a = E1.a + E2.a;
    return S;
}
int main()
{
    Example A, B, C;
    A.geta(10);
    B.geta(20);
    C = A.sum(A, B);
    C.display(C);
}