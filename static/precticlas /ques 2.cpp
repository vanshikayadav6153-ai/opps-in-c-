#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    void getData()
    {
        cin >> length >> breadth;
    }

    void area()
    {
        cout << "Area = " << length * breadth;
    }
};

int main()
{
    Rectangle r;
    r.getData();
    r.area();

    return 0;
}
