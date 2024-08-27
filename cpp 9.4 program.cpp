#include<iostream>
using namespace std;
void value(int n);
int main()
{
	int num;
	cout<<"enter number :";
	cin>>num;
	value(num);
	return 0;
}
void value(int n)
{
	int p,s;
	p=n-1;
	s=n+1;
	cout<<"The number before "<<n<<" is "<<p<<endl;
	cout<<"The number after "<<n<<" is "<<s;
}
