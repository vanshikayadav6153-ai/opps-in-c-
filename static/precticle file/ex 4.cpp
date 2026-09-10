#include <iostream>
using namespace std;

class Calculator {
public:
    // Inline function - compiler replaces the call with the code itself
    inline int square(int x) {
        return x * x;
    }

    // Default arguments - if b or c is not passed, 0 is used
    int add(int a, int b = 0, int c = 0) {
        return a + b + c;
    }

    // Function overloading - same name, different parameters
    int multiply(int a, int b) {
        return a * b;
    }

    float multiply(float a, float b) {
        return a * b;
    }

    int multiply(int a, int b, int c) {
        return a * b * c;
    }
};

int main() {
    Calculator c;

    cout << "Square of 7 = " << c.square(7) << endl;

    cout << "add(5)       = " << c.add(5) << endl;
    cout << "add(5,10)    = " << c.add(5, 10) << endl;
    cout << "add(5,10,15) = " << c.add(5, 10, 15) << endl;

    cout << "multiply(4,5)      = " << c.multiply(4, 5) << endl;
    cout << "multiply(2.5,4.0)  = " << c.multiply(2.5f, 4.0f) << endl;
    cout << "multiply(2,3,4)    = " << c.multiply(2, 3, 4) << endl;

    return 0;
}