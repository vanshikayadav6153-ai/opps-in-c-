#include<iostream>
using namespace std;
class Example
{
    int a;
    public:
    void geta(int);
    void display();
};

void Example::geta(int x)
{
    a = x;
    cout << x;
}

void Example::display()
{
    cout << a;
}

int main()
{
    Example E1;
    E1.geta(12);
    E1.display();
    return 0;
}
