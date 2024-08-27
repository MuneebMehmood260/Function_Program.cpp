#include<iostream>
using namespace std;
void table(int num);
int main()
{
	int n;
	cout<<"enter a number :";
	cin>>n;
	table(n);
	return 0;
}
void table(int num)
{
	int c;
	for(c=1;c<=10;c++)
	{
		cout<<num<<"*"<<c<<"="<<num*c<<endl;
	}
}
