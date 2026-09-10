#include<iostream>
using namespace std;
class Example
{
    int a;
    static int count;  
    public:
    void geta(int);
    void display();
};

int Example::count = 0;

void Example::geta(int x)
{
    a = x;
    count ++;
}

void Example::display()
{
    cout << a << endl;
    cout << "Count: " << count << endl;
}

int main()
{
    Example E1,E2,E3;
    E1.geta(12);
    E1.display();
    E2.geta(24);
    E2.display();
    E3.geta(36);
    E3.display();
    return 0;
}
