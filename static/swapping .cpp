#include<iostream>
using namespace std;

class B;

class A
{
    int a;
    public:
    void geta(int);
    friend void swap(A, B);
};

class B
{
    int b;
    public:
    void getb(int);
    friend void swap(A, B);
};

void A::geta(int x)
{
    a = x;
}

void B::getb(int y)
{
    b = y;
}

void swap(A x, B y)
{
    int temp;
    temp = x.a;
    x.a = y.b;
    y.b = temp;
    cout << x.a << " " << y.b << endl;
}

int main()
{
    A a;
    B b;
    a.geta(10);
    b.getb(20);
    swap(a, b);
    return 0;
}
