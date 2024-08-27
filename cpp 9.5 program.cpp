#include<iostream>
using namespace std;
void factorial(int n);
int main()
{
	int num;
	cout<<"enter number :";
	cin>>num;
	factorial(num);
	return 0;
}
void factorial(int n)
{
	int i;
	long f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<"The factorial of "<<n<<" is "<<f;
}
