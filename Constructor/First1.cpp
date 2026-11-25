#include <iostream>
using namespace std;
class Student
{
    int roll;
    string name;
    static int count;

public:
    Student(int, string);
    void display();
    static void showstd();
};
Student::Student(int r, string n)
{
    roll = r;
    name = n;
    count++;
}
void Student::display()
{
    cout << roll << endl;
    cout << name << endl;
}
void Student::showstd()
{
    cout << "The total number of students are: " << count << endl;
}
int Student::count;
int main()
{
    Student S1(2, "Arvind");
    S1.display();
    Student S2 = Student(10, "Yuvaan");
    S2.display();
    Student::showstd();
}