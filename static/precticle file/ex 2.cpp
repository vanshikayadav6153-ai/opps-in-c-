#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float marks;

public:
    void setData(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    void display() {
        cout << roll << "\t" << name << "\t" << marks << endl;
    }

    char grade() {
        if (marks >= 75) return 'A';
        else if (marks >= 60) return 'B';
        else if (marks >= 40) return 'C';
        else return 'F';
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[50];
    int r; string nm; float m;

    for (int i = 0; i < n; i++) {
        cout << "Enter roll, name, marks: ";
        cin >> r >> nm >> m;
        s[i].setData(r, nm, m);
    }

    cout << "\nRoll\tName\tMarks\tGrade\n";
    for (int i = 0; i < n; i++) {
        s[i].display();
        cout << "Grade: " << s[i].grade() << endl;
    }
    return 0;
}