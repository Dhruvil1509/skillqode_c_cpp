#include <iostream>
using namespace std;
int main() 
{
  int a,b,mull;
  cout << "enter two value :";
  cin >>a>>b;

  mull=a*b;
  cout<<"\n mull :"<<a*b;
  if (mull%3==0) 
  {
    cout << "\n deveisibl ";
  }
   else 
  {
    cout << "\n not deveisibl ";
  }
   if (mull%7==0) 
  {
    cout << "\n deveisibl ";
  }
   else 
  {
    cout << "\n not deveisibl ";
  }
}
