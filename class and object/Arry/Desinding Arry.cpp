#include<iostream>
using namespace std;
class product
{
	public:
	int id;
	char name[90];
    int price;
	public:
		void setdata()
		{
			cout<<"Enter a id name price";
			cin>>id>>name>>price;
			
		}
		void display()
		{
			
				cout<<"\t"<<id<<"\t"<<name<<"\t"<<price;
				cout<<"\n";
		}
		
	
		
};
	
int main()
{
	int id;
	char name[90];
	int price;
     product p1[3];
	for(int i=0;i<3;i++)
	{
		p1[i].setdata();
	}
	for(int i=0;i<3;i++)
	{
		p1[i].display();
	}
		int a[3];
	cout<<"Display Result";
	cout<<"\n";
		for(int i=0;i<3;i++)
	{
		p1[i].display();
	}
		for(int i=0;i<3;i++)
			{
				for(int j=i+1;j<3;j++)
				{
				  if(a[i].price<a[j].price)
				  {
				  	product temp=a[i];
				  	a[i]=a[j];
				  	a[j]=temp;
				  }
				}
			}

	
}