#include <iostream>
using namespace std;
class Test;
class Example
{
    int a;

public:
    Example(int);
    void displayA();
    friend void sum(Example, Test);
};
Example::Example(int x)
{
    a = x;
}
void Example::displayA()
{
    cout << a << endl;
}
class Test
{
    int b;

public:
    Test(int);
    void displayB();
    friend void sum(Example, Test);
};
Test::Test(int y)
{
    b = y;
}
void Test::displayB()
{
    cout << b << endl;
}

void sum(Example E, Test T)
{
    int s;
    s = E.a + T.b;
    cout << "\nThe sum is: " << s << endl;
}
int main()
{
    Example A(10);
    A.displayA();
    Test B(20);
    B.displayB();
    sum(A, B);
}