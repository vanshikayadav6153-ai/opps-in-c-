#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    void getdata(int, int);
    void show();
};
void Example::getdata(int x, int y)
{
    a = x;
    b = y;
}
void Example::show()
{
    cout << a << " " << b << endl;
}
int main()
{
    Example E;
    E.getdata(10, 30);
    E.show();
}