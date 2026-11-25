#include <iostream>
using namespace std;
class Example
{
private:
    int a, b;

public:
    int n;
    void getdata()
    {
        cout << "Enter the data: ";
        cin >> a >> b;
    }
    void print()
    {
        cout << "The values are: " << a << b;
    }
};

int main()
{
    Example E;
    E.n = 10;
    E.getdata();
    E.print();
    return 0;
}