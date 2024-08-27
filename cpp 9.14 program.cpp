#include<iostream>
using namespace std;
int gcd(int x,int y);
int main()
{
	int a,b;
	cout<<"Enter two integers : ";
	cin>>a>>b;
	cout<<"Greater common divisor is "<<gcd(a,b);
	return 0;
}
int gcd(int x,int y)
{
	int i,n,g;
	if(x<y)
	n=x;
	else
	n=y;
	for(i=1;i<=n;i++)
	if(x%i==0&&y%i==0)
	g=i;
	return g;
}
