#include<iostream>
using namespace std;
class example
{
    int a;
    public:
    void geta(int);
    void display();
};

void example::geta(int x)
{
    a = x;
    cout << x;
}

void example::display()
{
    cout << a;
}

int main()
{
    example E1;
    E1.geta(12);
    return 0;
}
