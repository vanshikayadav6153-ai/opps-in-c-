#include <iostream>
using namespace std;
void display()
{
    cout << "end";
}

// Variadic template
template <typename T, typename... Args>
void display(T first, Args... rest)
{
    cout << first << "\n";
    display(rest...); // Recursive call with remaining arguments
}

int main()
{
    display(10, 20.4, "Hello", 'A', true);
    return 0;
}
