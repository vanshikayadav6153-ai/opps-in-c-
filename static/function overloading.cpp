#include<iostream>
using namespace std;
class example
{
    int a , b;
    public:
     example();
     example(int , int);
example (example &);

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
example:: example(int x, int y){
a=x;
b=y;
}
example::example(example & E)
{
      P=E.a;
Q=E.b;
void example:: display ()
{
    cout<<P<<Q;
}


 int main ()
 { 
    example e1;
    e1.display();

    example e2(45,90);
    e2.display();
    example e3(e1);
    
    e3.display();

    example e4(e2)
e4.display();
return 0;
 }
};