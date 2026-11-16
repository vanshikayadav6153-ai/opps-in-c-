
#include <iostream>
using namespace std;

class Student
{
    static int count;

public:
    Student()
    {
        count++;
    }

    static void showCount()
    {
        cout << "Total objects created: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1, s2, s3;

    Student::showCount();

    return 0;
}
