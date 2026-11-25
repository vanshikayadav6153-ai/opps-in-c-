#include <iostream>
using namespace std;
template <class T1, class T2>
void display(T1 a, T2 b)
{
    cout << "\t"
         << a << endl;
    cout << "\t"
         << b << endl;
}

int main()
{
    display(10, 20.5);
    display(4.5, 6);
    display(6, "B");
    return 0;
}