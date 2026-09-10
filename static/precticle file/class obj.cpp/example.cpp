#include<iostream>
using namespace std;
class example{
    private:
    int a,b;
    public:
    void getab (int,int);
    void display();
    friend void average (example);
};
void example::getab(int x,int y){
    a=x;
    b=y;

}
void example::display(){
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
void average(example e){
    cout<<"average="<<(e.a+e.b)/2<<endl;
}
int main(){
    example e1;     
    e1.getab(10,20);
    e1.display();
    average(e1);
    return 0;
}   