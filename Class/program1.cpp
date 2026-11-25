#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    int c;
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Example E;
    E.getdata(10, 20);
    E.show();
    E.c = 100;
    // E.a = 2000;
    cout << E.c << endl;
    // cout << E.a << endl;
}