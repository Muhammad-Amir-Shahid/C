#include <iostream>
using namespace std;
class A{
    public:
    virtual void function();
    void func()
    {
        cout<<"A";
    }
};

class B:public A
{
public:
void function()
{
    cout<<"Virtual Function";
}
void func ()
{
    cout<<"B";
}

};

void main()
{
B b;
b.func();

}
