#include <iostream>
using namespace std;
class Example
{
private:
    int a, b;

public:
    void getdata();
    void print();
};
void Example::getdata()
{
    cout << "\nEnter the two numbers: ";
    cin >> a >> b;
}
void Example::print()
{
    cout << "The numbers are: " << a << " " << b;
}
int main()
{
    Example E;
    E.getdata();
    E.print();
    return 0;
}