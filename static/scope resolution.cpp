#include<iostream>
using namespace std;
int x=100;
int main(){
    int x=50;
    cout<< "local x: " << x << endl;
    cout<< "global x :" <<::x<<endl;
    return 0;
}