#include<iostream>
using namespace std;
void amstrong(int no)
{
	int count=0;
	int temp=no;
	//cout<<temp;
	while(no!=0)
	{
		no=no/10;
		count++;
	}
	no=temp;
	int sum=0;
	while(no!=0)
	{
		int rem=no%10;
		no=no/10;
		int i=1,p=1;
		while(i<=count)
		{
			p=p*rem;
			i++;
		}
		sum=sum+p;
	}
	
	no=temp;
	if(temp==sum)
	{
		cout<<"no is amstrong";
	}
	else
	{
		cout<<"no is not amstrong";
	}
}
void amstronng(int no1,char s[])
{
	cout<<s;
	cout<<"All Amstrong no from 1 To"<<no1<<"\n";
	int j,temp,sum=0;
	for(int i=1;i<=no1;i++)
	{
	      int j=i;
			int count=0,temp,sum=0;
			temp=j;
			while(j!=0)
			{
				j=j/10;
				count++;
			}
			
			j=temp;
			while(j!=0)
			{
				int rem=j%10;
				j=j/10;
				int k=1,p=1;
				while(k<=count)
				{
					p=p*rem;
					k++;
				}
				sum=sum+p;
			}
		j=temp;
		if(i==sum)
		{
			cout<<j<<"\n";
		}
	}
}
int main()
{
	int no,no1;
	cout<<"Enter a no";
	cin>>no;
	amstrong(no);
	cout<<endl<<"Enter  a no";
	cin>>no1;
	char s[10];
	cout<<"Enter a string";
	gets(s);
   amstronng(no1,s);
}