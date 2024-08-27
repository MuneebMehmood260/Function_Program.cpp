#include<iostream>
using namespace std;
void cal(int a,int b, char c);
int main()
{
	int x,y;
	char op;
	cout<<"enter 1st number , operator , 2nd number : ";
	cin>>x>>op>>y;
	cal(x,y,op);
	return 0;
}
void cal(int a,int b, char c)
{
	switch(c)
	{
		case '+':
			cout<<a<<"+"<<b<<"="<<a+b;
			break;
		case '-':
			cout<<a<<"-"<<b<<"="<<a-b;
			break;
		case '*':
			cout<<a<<"*"<<b<<"="<<a*b;
			break;	
		case '/':
			if(b==0)
			cout<<"invalid number";
			else
			cout<<a<<"/"<<b<<"="<<a/b;
			break;	
		case '%':
			cout<<a<<"%"<<b<<"="<<a%b;
			break;	
		default:
			cout<<"invalid number";
	}
}
