#include <iostream>
using namespace std;

template <class T>
void display(T a)
{
    cout << a << endl;
}

int main()
{
    display(10);
    display(10.3);
    display("arvind");
}
