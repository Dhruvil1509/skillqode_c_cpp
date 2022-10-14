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
    ~B()
    {
        cout<<"\n b is destructor";
    }
};
class C:public B
{
    public:
    C()
    {
        cout<<"\n C constructor";
    }
};
int main()
{
    C c;
}