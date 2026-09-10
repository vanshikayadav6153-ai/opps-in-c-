#include <iostream>
using namespace std;

class ParamDemo {
public:
    // Call by value - copy is made, original NOT changed
    void byValue(int x) {
        x = x + 10;
        cout << "Inside byValue, x = " << x << endl;
    }

    // Call by reference - alias of original, original IS changed
    void byReference(int &x) {
        x = x + 10;
        cout << "Inside byReference, x = " << x << endl;
    }

    // Call by address - pointer to original, original IS changed
    void byAddress(int *x) {
        *x = *x + 10;
        cout << "Inside byAddress, *x = " << *x << endl;
    }
};

int main() {
    ParamDemo obj;
    int a = 5;

    cout << "Original a = " << a << endl;

    obj.byValue(a);
    cout << "After byValue, a = " << a << "  (unchanged)\n\n";

    obj.byReference(a);
    cout << "After byReference, a = " << a << "  (changed)\n\n";

    obj.byAddress(&a);
    cout << "After byAddress, a = " << a << "  (changed)\n";

    return 0;
}