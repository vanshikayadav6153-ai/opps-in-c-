#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Collection {
private:
    vector<int> numbers;
    vector<string> names;

public:
    void addNumber(int n) { numbers.push_back(n); }
    void addName(string s) { names.push_back(s); }

    void display() {
        cout << "Numbers: ";
        // 'auto' lets compiler decide the type (here int)
        for (auto n : numbers)
            cout << n << " ";
        cout << endl;

        cout << "Names: ";
        // '&' avoids copying each string (faster)
        for (const auto &s : names)
            cout << s << " ";
        cout << endl;
    }

    void doubleAll() {
        // reference '&' so the original values get modified
        for (auto &n : numbers)
            n = n * 2;
    }
};

int main() {
    Collection c;

    for (int i = 1; i <= 5; i++)
        c.addNumber(i);

    c.addName("Amit");
    c.addName("Priya");
    c.addName("Rahul");

    cout << "Before:\n";
    c.display();

    c.doubleAll();

    cout << "\nAfter doubling:\n";
    c.display();

    // auto with an ordinary variable
    auto x = 10;      // int
    auto y = 3.5;     // double
    cout << "\nx + y = " << x + y << endl;

    return 0;
}