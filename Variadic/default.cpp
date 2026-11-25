#include <iostream>
using namespace std;
void display(int z, int x = 50)
{
    cout << z << x << endl;
}
int main()
{
    display(10);
    display(20, 40);
}