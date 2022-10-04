#include <iostream>
using namespace std;
int main() 
{
  int a,b,mull,addi;
  cout << "enter two value :";
  cin >>a>>b;
  mull=a+b;
  addi=a*b;
  if (mull%addi==0) 
  {
    cout << "\n is deveisible by adition :";
  }
   else 
  {
    cout << "\n not deveisibl by adition :";
  }
  
}
