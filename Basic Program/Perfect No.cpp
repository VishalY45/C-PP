#include<iostream>
using namespace std;
int main()
{
	int no,sum=0;
	cout<<"Enter a no";
	cin>>no;
	for(int i=1;i<no;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==no)
	{
		cout<<"No is Perfect";
	}
	else
	{
		cout<<"no is not perfect";
	}
}