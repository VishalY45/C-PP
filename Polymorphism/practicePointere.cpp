#include<iostream>
#include<stdlib.h>
using namespace std;
int size;
void arr(int *a)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<a[i];
	}
}
int main()
{
	
	cout<<"Enter a size\n";
	cin>>size;
	int *a;
	a=(int*)malloc(sizeof(a)*size);
	cout<<"Enter a no\n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	arr(a);
	
}