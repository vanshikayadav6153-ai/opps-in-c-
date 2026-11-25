#include <iostream>
using namespace std;
int sum(int *, int *); // function declaration
int main()
{
    int a, b, r;
    cout << "Enter two numbers:";
    cin >> a >> b;
    r = sum(&a, &b);
    cout << r;
}
int sum(int *x, int *y)
{
    int s;
    s = *x + *y;
    return (s);
}