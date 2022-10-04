#include<iostream>
using namespace std;
class Bank
{
    int accbalance;
    public:
    Bank()
    {
        accbalance=1000;
        cout<<"\n default constructer called :";
    }
    Bank(int initbalance)
    {
        accbalance=initbalance;
        cout<<"\n parameterized constructer called :";
    }
    void showaccbalance()
    {
        cout<<"\n account balance :"<<accbalance;
    }
};
int main()
{
    Bank person1(1000),person2(2000),person3;
    person1.showaccbalance();
    person2.showaccbalance();
    person3.showaccbalance();
}