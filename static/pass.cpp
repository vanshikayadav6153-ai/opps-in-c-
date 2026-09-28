#include<iostream>
using namespace std;
// 1. Pass by value
void byValue(int x) {
x = x + 10; // only local copy changes
}
// 2. Pass by reference
void byReference(int &x) {
x = x + 10; 
}
// 3. Pass by address (pointer)
 void byAddress(int *x) {
*x = *x + 10; 
}
int main() {
int a = 5;
byValue(a);
cout<< "After by Value: " <<a<<endl; // 5 (unchanged)
 byReference(a);
cout<< "After byReference: " <<a<<endl; // 15
byAddress(&a);
cout<< "After byAddress: " <<a<<endl; 
}