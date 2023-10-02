#include<iostream>
using namespace std;
int main()
{
	int no,sum=0;
	cout<<"Enter a no";
	cin>>no;
	int temp=no;
	while(no!=0)
	{
		int rem=no%10;
		no=no/10;
		int i=1,s=1;
		while(i<=rem)
		{
			s=s*i;
			i++;
		}
		sum=sum+s;
		
	}
	cout<<sum;
	if(temp==sum)
	{
		cout<<"No is Strong";
	}
	else
	{
		cout<<"No is Not strong";
	}
	
}