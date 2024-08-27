#include<iostream>
using namespace std;
void swap(int &x, char &y);
int main()
{
	int a,b;
	cout<<"enter two integers :";
	cin>>a>>b;
	cout<<"Values before swapping are:\n";
	cout<<"a= "<<a<<"\nb= "<<b<<endl;
	swap(a,b);
	cout<<"Values after swapping are:\n"; 
	cout<<"a= "<<a<<"\nb= "<<b<<endl;
	return 0;
}
void swap(int &x, char &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
