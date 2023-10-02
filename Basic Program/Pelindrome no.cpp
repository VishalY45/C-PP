#include<iostream>
using namespace std;
int main()
{
	int no,rev=0;
	cout<<"Enter a no";
	cin>>no;
	int temp=no;
	while(no!=0)
	{
		int rem=no%10;
		no=no/10;
		rev=rev*10+rem;
	}
	if(rev==temp)
	{
		cout<<"No is Pelindrome";
	}
	else
	{
		cout<<"No is Not pelindorme";
	}
}