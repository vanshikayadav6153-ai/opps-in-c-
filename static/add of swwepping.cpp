#include<iostream>
using namespace std;
class example
{
    int a , b;
    public:
     example();
     void swap();
     void display();


};


example :: example ()
{
    a = 10 ;
    b = 20 ;

}

 void example :: swap()
 {
    a = a + b ;
    b = a - b ;
    a = a - b ;
 }

 void example:: display()
 {
    cout << a << " " << b ;
 }

 int main ()
 {
    example e1;
    e1.display();
    cout << endl;

    e1.swap();
    e1.display();
 }
