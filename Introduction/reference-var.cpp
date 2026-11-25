#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a;
    a = a + 10;
    cout << a << endl;
    cout << b << endl;
}