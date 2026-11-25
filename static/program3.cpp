#include <iostream>
using namespace std;
class Example
{
    int a;
    static int n;

public:
    void geta(int);
    void display();
    static void show();
};
int Example::n;
void Example::geta(int x)
{
    a = x;
}
void Example::display()
{
    cout << "\n"
         << a << endl;
    cout << "\n"
         << n << endl;
}
void Example::show()
{
    cout << "Inside class member function" << endl;
    cout << n << endl;
    // cout << a;
}
int main()
{
    Example E1;
    E1.geta(23);
    E1.display();
    Example::show();
}