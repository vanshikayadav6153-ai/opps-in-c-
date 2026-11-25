#include <iostream>
using namespace std;
class Example
{
    int a;

public:
    void getdata(int);
    void display();
    friend Example operator-(Example);
};
void Example::getdata(int x)
{
    a = x;
}
void Example::display()
{
    cout << a << endl;
}
Example operator-(Example E1)
{
    Example E2;
    E2.a = -E1.a;
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
