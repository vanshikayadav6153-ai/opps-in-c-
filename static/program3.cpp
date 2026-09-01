#include <iostream>
using namespace std;

class Calc {
    int value;          // ordinary (instance) variable - one per object
    static int total;   // static data member - shared by all objects
public:
    Calc(int v = 0) { value = v; }

    // Overload 1: works on the ordinary variable, returns sum of two objects
    int add(Calc a, Calc b) {
        value = a.value + b.value;
        return value;
    }

    // Overload 2: works on the static variable, accumulates into shared total
    int add(int x) {
        total = total + x;
        return total;
    }

    void show() {
        cout << "value = " << value << ", total (static) = " << total << endl;
    }
};

int Calc::total = 0;   // define the static member

int main() {
    Calc a(10), b(25), c;

    // uses overload 1 (ordinary variable)
    cout << "a + b = " << c.add(a, b) << endl;

    // uses overload 2 (static variable) - total keeps growing
    cout << "total after +5  = " << c.add(5) << endl;
    cout << "total after +20 = " << c.add(20) << endl;

    c.show();
    return 0;
}
