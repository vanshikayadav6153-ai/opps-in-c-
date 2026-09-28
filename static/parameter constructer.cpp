#include<iostream>
using namespace std;
class example{
    int a,b;
    public:
    example(int ,int);
    void display();
};
example::example (int x,int y)
{
    a=x;
    b=y;
}
void example::display()
{
    cout<<a<<b;

}
int main(){
    example E1=example(10,20);
    E1.display();
    example E2(100,200);
    E2.display();
    


}