#include<iostream>
using namespace std;
int main()
{
	char ch,A,E,I,O,U,a,e,i,o,u;

	cout<<"Enter One Character :";
	cin>>ch;

	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		cout<<"\n Character is vower. "<<ch;
	}
	else
	{
		cout<<"\n Character is Consonents."<<ch;
	}
}