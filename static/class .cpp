#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;

        
        if (age > 18) {
            cout << "Status: Allowed to vote." << endl;
        } else {
            cout << "Status: Cannot vote." << endl;
        }
    }
};

int main() {
    Student s1; 
    s1.name = "Vanshika";
    s1.age = 20;

    s1.displayInfo();
    return 0;
}
