#include<iostream>
using namespace std;
int main()
{
	int no, f=0;;
	cout<<"Enter a no";
	cin>>no;
	for(int i=2;i<no;i++)
	{
		 f=0;
		if(no%i==0)
		{
		  f=1;	
		  break;
		}
	}
	if(f==0)
	{
		cout<<"No is Prime";
	}
	else
	{
		cout<<"No is Not prime";
	}
}