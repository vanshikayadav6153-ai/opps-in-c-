#include <iostream>
using namespace std;
template <class T>
void display(T a)
{
    cout << a << "\n";
}
int main()
{
    display(10);
    display(20.4);
    display("Hello");
}