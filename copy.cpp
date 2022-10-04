#include<iostream>
#include<string>
using namespace std;
int main()
{   
       string str;
       int i,j;
       char str1[10],str2[10];
       cout<<"\n enter string :";
       getline(cin,str);
       for(i=0;str[i]!='\0';i++);
       cout<<"\n string length is :"<<i;
       for(j=0;j<=i;j++)
          {
             str2[j]=str1[j];
          }
          cout<<"\n str2"<<char<<str2;
}