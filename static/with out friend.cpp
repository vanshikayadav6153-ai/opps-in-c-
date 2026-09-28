#include <iostream>
using namespace std;
class example{
    int a;
    public:
    void geta(int x);
    friend example sum(example,example);
    void display();
};
void example::geta(int x)
{
    a = x;
}
example sum(example e1,example e2)
{
    example obj3;
    obj3.a = e1.a + e2.a;
    return obj3;
}
void example::display()
{
    cout<<a;
}
int main()
{
    example e1,e2,e3;
    e1.geta(10);
    e2.geta(20);
    e3 = sum(e1,e2);
    e3.display();
    return 0;
}
