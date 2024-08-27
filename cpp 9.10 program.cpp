#include<iostream>
using namespace std;
char grade(int x);
int main()
{
	int marks;
	char g;
	cout<<"Enter marks :";
	cin>>marks;
	g=grade(marks);
	cout<<"Your grade is "<<g;
	return 0;
}
char grade(int x)
{
	if(x>80)
	return 'A';
	else if(x>60)
	return 'B';
	else if(x>40)
	return 'C';
	else
	return 'F';
}
