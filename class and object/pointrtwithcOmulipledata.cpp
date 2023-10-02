#include<iostream>
#include<stdlib.h>
using namespace std;
class product{
	int id;
	char name[90];
	int price;
	int size;
	public:
		void setdata()
		{
			cout<<"Enter a data";
			cin>>id>>name>>price;
		}
		void show()
		{
			cout<<id<<"\t"<<name<<"\t"<<price;
			cout<<"\n";
		}
};
int main()
{
	int s;
	cout<<"Enter a size";
	cin>>s;
	
	product *p=( class product*)malloc(s*sizeof(product));
	for(int i=0;i<s;i++)
	{
		p[i].setdata();
	}
	for(int i=0;i<s;i++)
	{
		p[i].show();
	}
}