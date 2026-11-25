#include <iostream>
using namespace std;
void sum();
int sum(int, int);
float sum(int, int, float);
int main()
{
    int a, b, r1;
    float r2, c;
    cout << "\n sum function without parameters: ";
    sum(); // first function calling
    cout << "\n sum function with 2 parameters: ";
    cout << "\n Enter the two numbers: ";
    cin >> a >> b;
    r1 = sum(a, b);
    cout << "\n The sum is :" << r1;
    cout << "\n sum function with 3 parameters: ";
    cout << "\n Enter the three numbers: ";
    cin >> a >> b >> c;
    r2 = sum(a, b, c);
    cout << "\n The sum is :" << r2;
}
void sum()
{
    int x, y, s;
    cout << "\nEnter the numbers: ";
    cin >> x >> y;
    s = x + y;
    cout << "\nThe sum is: " << s;
}
int sum(int x, int y)
{
    int s = x + y;
    return s;
}
float sum(int x, int y, float z)
{
    float s = x + y + z;
    return (s);
}