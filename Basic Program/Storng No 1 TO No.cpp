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
		while(k!=0)
		{
			int rem=k%10;
			k=k/10;
			int j=1,s=1;
			while(j<=rem)
			{
				s=s*j;
				j++;
			}
			sum=sum+s;
		}
		if(sum==i)
		{
			cout<<i<<"\n";
		}
	}
}