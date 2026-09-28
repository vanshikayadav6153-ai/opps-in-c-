#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void geta(int);
    friend class B;
};
class B
{
    int b;
    public:
    void getb(int);
    void display(A);
};
void A::geta(int x)
{
    a = x;
}
void B::getb(int y)
{
    b = y;
}
void B::display(A a1)
{
    cout<<"a = "<<a1.a<<endl;
    cout<<"b = "<<b<<endl;
}
int main()
{
    A a1;
    B b1;
    a1.geta(10);
    b1.getb(20);
    b1.display(a1);
    return 0;
}
