#include <iostream>
using namespace std;
class Example
{
public:
    Example();
    ~Example();
};

Example::Example()
{
    cout << "Constructor invoked" << endl;
}
Example::~Example()
{
    cout << "Destructor invoked" << endl;
}
int main()
{
    Example E1;
}