#include<iostream>
using namespace std;
int getsquare(int r)
{
	return r*r;
}
int main()
{
	int r;
	cout<<"Enter a no\n";
	cin>>r;
	int result=getsquare(r);
	cout<<"Result\t"<<result;
}