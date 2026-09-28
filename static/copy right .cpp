#include<iostream>
using namespace std;
class example
{
    int a , b;
    public:
     example();
     void display();


};


example :: example ()
{
    a = 10 ;
    b = 20 ;

}
 void example:: display()
 {
    cout << a << b ;
 }

 int main ()
 { 
    example e1= example (100,200);
    e1.display();

    example e2=(190,200);
    e2.display();

example e3=e1;
e3 display();
}