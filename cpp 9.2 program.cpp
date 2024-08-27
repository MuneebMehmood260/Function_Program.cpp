#include<iostream>
using namespace std;
void max(int a, int b);
int main()
{
	int x,y;
	cout<<"enter two number :";
	cin>>x>>y;
	max(x,y);
	return 0;
}
void max(int a, int b)
{
	if(a>b)
	cout<<"maximun number is "<<a;
	else
	cout<<"maximun number is "<<b;
}
