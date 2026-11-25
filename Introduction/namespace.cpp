#include <iostream>
using namespace std;
namespace first
{
    int x = 10;
}

namespace second
{
    double x = 5.6;
}
int main()
{
    string x = "Arvind";
    cout << x;
    cout << "\n"
         << first::x;
    cout << "\n"
         << second::x;
}