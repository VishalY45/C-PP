#include<iostream>
#include<string.h>
using namespace std;
class product{
	int id;
	char name[90];
	int price;
	public:
		void setdata(int,char[],int);
		void show();
};
void product::setdata(int id,char nname[],int price)
{
    this->id=id;
    strcpy(name,nname);
    this->price=price;
}
void product::show()
{
	cout<<"id"<<id<<"\n"<<"name"<<name<<"\n"<<"price"<<price;
}
int main()
{
	int id;
	char nname[90];
	int price;
	cout<<"Enter a data";
	cin>>id>>nname>>price;
	product p1;
	p1.setdata(id,nname,price);
	p1.show();
	
}