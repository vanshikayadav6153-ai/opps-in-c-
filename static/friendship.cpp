#include<iostream>
using namespace std;

class B;

class A
{
    int a;
    public:
    void geta(int x)
    {
        a = x;
    }
    void display(B);
};

class B
{
    int b;
    public:
    void getb(int y)
    {
        b = y;
    }
    friend void A::display(B);
};

void A::display(B obj)
{
    cout << "a = " << a << ", b = " << obj.b << endl;
}

int main()
{
    A a1;
    B b1;
    a1.geta(10);
    b1.getb(20);
    a1.display(b1);
    return 0;
};

