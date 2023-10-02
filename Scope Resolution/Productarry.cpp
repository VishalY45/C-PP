#include<iostream>
using namespace std;
class Product{
	int id,price;
	char name[90];
	public:
		void setvalue();
		void show();
};
void Product::setvalue()
{
	cout<<"Enter  id name price";
	cin>>id>>name>>price;
}
void Product::show()
{

		cout<<"\t"<<id<<"\t"<<name<<"\t"<<price;
	
}
int main()
{
	Product p1[3];
	int a[3];
	for(int i=0;i<3;i++)
	{
		p1[i].setvalue();
	}
	for(int i=0;i<3;i++)
	p1[i].show();
	
}