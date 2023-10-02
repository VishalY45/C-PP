#include<iostream>
using namespace std;
int main()
{
	int no;
	cout<<"Enter a no";
	cin>>no;
	for(int i=1;i<=no;i++)
	{
		int k=i,sum=0;
		for(int j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			cout<<i<<"\n";
		}
	}
}