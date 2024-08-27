#include<iostream>
using namespace std;
void num_chk(int n)

{
	int c=0,i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		c=1;
	}
	if(n%2==0&&c==0)
	cout<<n<<" is prime even number";
	else if(n%2!=0&&c==0)
	cout<<n<<" is prime odd number";
	else if(n%2==0&&c==1)
	cout<<n<<" is even number not prime number";
	else if(n%2!=0&&c==1)
	cout<<n<<" is odd number not prime number";
	else
	cout<<n<<" is prime even number";
}
int main()
{
	int n;
	cout<<"Enter a number :";
	cin>>n;
	cout<<"\n-------------------------";
	cout<<"\n| Nature of number is |\n";
	cout<<"-------------------------\n";
	num_chk(n);
	return 0;
}
