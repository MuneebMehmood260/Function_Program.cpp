#include<iostream>
using namespace std;
int sqr(int n);
int cube(int n);
int main()
{
	int a,b,r;
	cout<<"enter a  number :";
	cin>>a;
	cout<<"enter a  number :";
	cin>>b;
	r=sqr(a)+cube(b);
	cout<<"Result = "<<r;
	return 0;
}
int sqr(int n)
{
	return n*n;
}
int cube(int n)
{
	return n*n*n;
}
