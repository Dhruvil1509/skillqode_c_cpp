#include<iostream>
using namespace std;
int main()
{
       char ch,chang;
       cout<<"enter value :";
       cin>>ch;
       if(ch>=65&&ch<=90)
       {
           chang=ch+32;
           cout<<"\n char :"<<chang;
       }
       else 
       {
         chang=ch-32;
         cout<<"\n char :"<<chang;
       }




}