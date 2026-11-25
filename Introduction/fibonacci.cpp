#include <iostream>
using namespace std;
int main()
{
    int a, b, c, n;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "\n The fibonacci series: ";
    cout << a << b;
    for (int i = 0; i < n - 2; i++)
    {
        c = a + b;
        cout << c;
        a = b;
        b = c;
    }
}