#include<iostream>
using namespace std;
class student{
char name[20];
int roll_no;
char section[10];

public:
void getName();
void setName();
void getRoll();
void setRoll();
void getSection();
void setSection();

};
void student::getName()
{
    cout<< "Enter Name: ";
    cin>>name;
}
void student::setName()
{
    cout<<name;
}
void student::getRoll()
{

}
void student::getRoll()
{
    
}


int main()
{
    student s;
    s.getName();
    s.setName();
    return 0;
}