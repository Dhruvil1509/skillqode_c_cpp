#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\n A  constructor";
    }
    ~A()
    {
        cout<<"\n A  destructor";
    }

};
class B
{
    public:
    B()
    {
        cout<<"\n B constructor";
    }
    ~B()
    {
        cout<<"\n B  destructor";
    }
};
class C:public A,public B
{
    public:
    C()
    {
        cout<<"\n C constructor";
    }
    ~C()
    {
        cout<<"\n C  destructor";
    }
};
int main()
{
   // C c;
}