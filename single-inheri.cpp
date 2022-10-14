#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\n A is constructor";
    }
    ~A()
    {
        cout<<"\n A is destructor";
    }

};
class B:public A
{
    public:
    B()
    {
        cout<<"\n B constructor";
    }
};
int main()
{
    B b;
}