#include <iostream>
using namespace std;
class Example
{
private:
    int a, b;

public:
    void getdata(int, int);
    int display();
};
void Example::getdata(int x, int y)
{
    a = x;
    b = y;
}
int Example::display()
{
    int r = a + b;
    return (r);
}
int main()
{
    int n1, n2;
    cout << "\nEnter the numbers: ";
    cin >> n1 >> n2;
    Example E;
    E.getdata(n1, n2);
    int res = E.display();
    cout << "\n The sum is: " << res << endl;
}