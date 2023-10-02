#include<iostream>
#include<string.h>
using namespace std;
void prime(int no)
{
	int f=0;
	for(int i=2;i<no;i++)
	{
		if(no%i==0)
		{
			f=1;
			break;
		}
	}
	if(f)
	{
		cout<<"No is not prime";
	}
	else
	{
		cout<<"no is prime";
	}
}
void prime(char name[])
{
	_flushall();
	int s=0,mid,end;
	int len=strlen(name);
	cout<<len;
	mid=len/2;
	end=len-1;
	for(s=0;s<mid;s++)
	{
		char temp=name[s];
		name[s]=name[end];
		name[end--]=temp;
	}
	cout<<name;
}
int main()
{
	int no;
	cout<<"Enter a no";
	cin>>no;
	prime(no);
	char name[90];
	cout<<"\n"<<"Enter a string";
	_flushall();
	gets(name);
	prime(name);
}