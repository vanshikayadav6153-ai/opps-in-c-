#include<iostream>
using namespace std;
class example
{
    int a , b;
    public:
     example();
     void display();


}e


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
    example e1;
    e1.display();

    example e2;
    e2.display();
}