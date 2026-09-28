#include<iostream>
using namespace std; 
class B;
class A
{
    int a;
    public:
    void geta(int);
    void showa()
    {
        cout<<"a="<<a;
    }
    friend void displayB(B);

};
class B
{
    int b;
    public:
    void getb(int); 
    void showb()
    {
        cout<<"b="<<b;
    }
    friend void displayB(B);
};
void A::geta(int x)
{
    a = x;
}
void B::getb(int y)
{
    b = y;
}
void displayB(B b1) 
{
    cout<<"b="<<b1.b;
}
int main()
{
    A a1;
    B b1;
    a1.geta(10);
    
b1.getb(20);
    a1.showa();
    b1.showb();
    displayB(b1);=
    return 0;
}
