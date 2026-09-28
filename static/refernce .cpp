#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int & ref=a;
    ref =20;
    cout<<"a="<<a<<endl;
    cout<<"ref="<<ref<<endl;
    a=50;
    cout<<"ref"<<ref<<endl;
    
}