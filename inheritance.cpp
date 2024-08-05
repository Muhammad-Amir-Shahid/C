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

void main()
{
B b;
b.func();

}
