#include<iostream>
#include<stdlib.h>
using namespace std;
class Info
{
	int id;
	char name[90];
	int sal;
	public:
		void setdata()
		{
			cout<<"Enter name id sal";
			cin>>name>>id>>sal;
		}
		void show()
		{
			cout<<"\n"<<name<<"\t"<<id<<"\t"<<sal<<"\n";
		}
};
int main()
{
	int size;
	cout<<"Enter a size";
	cin>>size;
	Info *p=(Info*)malloc(sizeof(Info)*size);
	for(int i=0;i<size;i++)
	{
		p[i].setdata();
	}
	for(int i=0;i<size;i++)
	{
		p[i].show();
	}

	
}