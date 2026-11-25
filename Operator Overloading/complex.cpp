#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c)
    {
        Complex S;
        S.real = real + c.real;
        S.imag = imag + c.imag;
        return S;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 5), c2(2, 3), c3, c4;

    cout << "Complex Number 1: ";
    c1.display();

    cout << "Complex Number 2: ";
    c2.display();
    c3 = c1 + c2;
    cout << "\nAfter Addition: ";
    c3.display();
    return 0;
}