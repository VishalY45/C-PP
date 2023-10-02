#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1;
	int p=0;
	for(i=1;i<=8;i++)
	{
		if(i<=4)
		{
		p=(2*i)-1;
		k=p;
		if(i>1&&i<=3)
		{
			k=p-1;
		}
	    }
		else if(i==5)
		{
			p=7;
			k=p;
		}
		else if(i>5)
		{
			p=p-2;
			k=p-1;
			if(i==8)
			{
				k=1;
			}
		}
		for(j=1;j<=p;j++)
		{
			if(j%2==0)
			{
				cout<<"*";
			}
			else
			{
				cout<<k++;
				
			}
	   }
		cout<<"\n";
	}
}