#include<iostream>
using namespace std;
int main()
{
	int no,f=0;
	cout<<"Enter a no";
	cin>>no;
	for(int i=2;i<=no;i++)
	{
		for(int j=2;j<=i/2;j++)
		{
			f=0;
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout<<i<<"\n";
		}
	}
}