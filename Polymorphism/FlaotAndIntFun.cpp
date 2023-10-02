#include<iostream>
using namespace std;
int getsquare(int r)
{
	return r*r;
}
float getsquare(float r1)
{
	return r1*r1;
}
int main()
{
	int r;
	float r1;
	cout<<"Enter a int no";
	cin>>r;
	cout<<"Enter a float no\n";
	cin>>r1;
	int result=getsquare(r);
	cout<<"Int Result:="<<result;
	float result1=getsquare(r1);
	cout<<"\nfloat Result:="<<result1;
	
}