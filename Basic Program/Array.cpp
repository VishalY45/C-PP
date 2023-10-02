#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter a element\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Display array";
	for(int i=0;i<5;i++)
	{
		cout<<"\t"<<arr[i];
	}
}