#include<iostream>
using namespace std;

class Test;   // forward declaration so sum() can be declared as a friend

class Example{
    private:
    int a;

    public:
    void geta (int);
    void Adisplay();
    friend int sum (Example,Test);
};

void Example::geta(int x){
    a=x;
}
void Example::Adisplay(){
    cout<<"a="<<a<<endl;
}

class Test{
    public:
    int b;
    void getb(int);
    void Bdisplay();
    friend int sum(Example,Test);
};

void Test::getb(int y){
    b=y;
}
void Test::Bdisplay(){
    cout<<"b="<<b<<endl;
}


int sum(Example e,Test t)
{
    return e.a + t.b;
}

int main(){
    Example e1;
    e1.geta(10);
    e1.Adisplay();

    Test t1;
    t1.getb(20);
    t1.Bdisplay();

    cout<<"sum="<<sum(e1,t1)<<endl;
    return 0;
}
