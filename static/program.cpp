#include<iostream>
using namespace std;
class example{
    public:
    static int n;
};
int example::n=10;
int main (){
    cout << example::n;
    return 0;
}