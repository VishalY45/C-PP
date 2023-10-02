#include<iostream>
using namespace std;
int main()
{
	int ind,base,p=1;
	cout<<"Enter a no\n";
	cin>>base>>ind;
	for(int i=1;i<ind;i++)
	{
		p=p*base;
	}
	cout<<"Power is"<<p;
}