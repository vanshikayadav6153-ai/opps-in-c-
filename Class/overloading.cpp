#include <iostream>
using namespace std;
class Overload
{
    int a, b;

public:
    void sum();
    int sum(int, int);
    // double sum(int, double);
};
void Overload::sum()
{
    cout << "Enter the numbers: ";
    cin >> a >> b;
    int s = a + b;
    cout << "The sum is: " << s;
}
int Overload::sum(int x, int y)
{
    a = x;
    b = y;
    int s = a + b;
    return (s);
}
int main()
{
    int n1, n2;
    Overload O1;
    O1.sum();
    cout << "\nEnter the numbers: ";
    cin >> n1 >> n2;
    int r = O1.sum(n1, n2);
    cout << "\nThe sum is: " << r;
}