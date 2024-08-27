#include<iostream>
using namespace std;
float area(int b,int h);
int main()
{
	int base,height;
	float a;
	cout<<"Enter base & height: ";
	cin>>base>>height;
	a=area(base,height);
	cout<<"Area of Triangle = "<<a;
	return 0;
}
float area(int b,int h)
{
	float ar;
	ar=0.5*b*h;
	return ar;
}
