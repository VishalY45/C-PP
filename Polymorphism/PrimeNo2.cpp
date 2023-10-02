#include<iostream>
using namespace std;
void prime(long int no)
{
	int f=0;
	for(int i=1;i<no;i++)
	{
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
		cout<<"No is Not Prime";
	}
}
void prime(int no1)
{
	for(int i=0;i<=no1;i++)
	{
		int k=i,f=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout<<"\n"<<i;
		}
	}
}
int main()
{
	long int no;
	cout<<"Enter a no";
	cin>>no;
	prime(no);
	int no1;
	cout<<"\n"<<"Enter a no";
	cin>>no1;
	prime(no1);
}