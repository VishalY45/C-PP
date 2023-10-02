#include<iostream>
using namespace std;
void arrop(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=a[i];
			}
		}
	}
	cout<<"\nDisplay Array\n";
	for(int i=0;i<size;i++)
	{
		cout<<"\t"<<a[i];
	}
}
int arrop(int a[],int skey,int size)
{
	int f=0;
	for(int i=0;i<size;i++)
	{
		if(skey==a[i])
		{
		    f=1;
			break;
		}
	}
	if(f)
	{
		return 1;
	}
	else
	return -1;
}
int main()
{
	int size;
	cout<<"\nEnter a size\n";
	cin>>size;
	int a[size];
	cout<<"Enter a array element\n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	arrop(a,size);
	int skey;
	cout<<"Enter s key\n";
	cin>>skey;
	int result=arrop(a,skey,size);
	if(result)
	{
		cout<<"Value is found";
	}
	else
	{
		cout<<"Value is not found\n";
	}
}