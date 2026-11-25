#include <iostream>
using namespace std;
template <class T>
T display(T a, T b)
{
    T s = a + b;
    return (s);
}

int main()
{
    int r1 = display(10, 20);
    cout << r1 << endl;
    double r2 = display(4.5, 6.7);
    cout << r2 << endl;
    return 0;
}