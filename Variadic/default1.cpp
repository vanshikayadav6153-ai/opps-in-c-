#include <iostream>
using namespace std;

void greet(string name = "Guest", int age = 18)
{
    cout << "Hello " << name << ", age: " << age << endl;
}

int main()
{
    greet();            // Uses both defaults → "Hello Guest, age: 18"
    greet("Arvind");    // Uses default for age → "Hello Arvind, age: 18"
    greet("Rahul", 25); // Overrides both → "Hello Rahul, age: 25"
    return 0;
}
