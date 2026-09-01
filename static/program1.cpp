#include <iostream>
using namespace std;

class example {
    static int n;

public:
    void display();
};

// static member definition (outside the class)
int example::n = 10;

// member function definition (outside the class)
void example::display() {
    cout << n << endl;
}

int main() {
    example obj;
    obj.display();
    return 0;
}
