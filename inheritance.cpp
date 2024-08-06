#include <iostream>
using namespace std;
class A{
    public:
   
    void func()
    {
        cout<<"A";
    }
};


class B:public A
{
public:

void func ()
{
    cout<<"B.";
}

};
class C:public B
{
    public:

void func ()
{
    cout<<"C.";
}
};
void main()
{
B b;
b.func();

}
