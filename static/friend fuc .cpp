#include<iostream>
#include<string>
using namespace std;

class Friend
{
    string name;
    float contribution;

    public:
    void geta(string n, float c)
    {
        name = n;
        contribution = c;
    }

    friend void checkEligibility(Friend, Friend, Friend);
};

void checkEligibility(Friend ram, Friend syam, Friend amit)
{
    float total = ram.contribution + syam.contribution + amit.contribution;
    float minRequired = 100000;

    if (total >= minRequired)
        cout<<"Eligible for startup"<<endl;
    else
        cout<<"Not eligible for startup"<<endl;
}
int main()
{
    Friend ram, syam, amit;
    ram.geta("Ram", 40000);
    syam.geta("Syam", 30000);
    amit.geta("Amit", 35000);

    checkEligibility(ram, syam, amit);
    return 0;
}
