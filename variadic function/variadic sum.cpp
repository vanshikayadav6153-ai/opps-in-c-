#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int count, ...)
{
    int total = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++)
    {
        total += va_arg(args, int);
    }
    va_end(args);
    return total;
}

int main()
{
    cout << "Sum = " << sum(5, 10, 20, 30, 40, 50) << endl;
    return 0;
}
