#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"Add is"<<a+b;
}
void add(float x,float y)
{
	cout<<"Float Add"<<x+y;
}
int main()
{
	/*int a,b;
	float x,y;
	cout<<"Enter a no";
	cin>>a>>b;
	cout<<"Enter a Float no\n";
	cin>>x>>y;*/
	add(44,55);
	add(33.4f,4.5f);
}