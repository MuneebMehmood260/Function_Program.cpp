#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	double term;
	int n;
	unsigned long fact(int);
	cout<<"Enter maximun value of denominator :";
	cin>>n;
	double sum=1;
	for(int i=1;i<=n;i++)
	{
		term=1.0/fact(i);
		sum+=term;
	}
	cout<<"\n\nsum of series is :"<<sum;
	return 0;
}
unsigned long fact(int n)
{
    unsigned long prod=1;
    int i;
    for(i=1;i<=n;i++)
    prod=prod*i;
    return prod;
}
