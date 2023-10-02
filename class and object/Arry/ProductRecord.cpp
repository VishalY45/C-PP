/*WAP to create class name as Product with field id,nme and price and create array of object of Product class and arrange
 all products in descending order by price.*/
#include<iostream>
using namespace std;
class product
{
	int id;
	char name[90];
	int price;
	public:
		void setdat()
		{
			cout<<"Enter id name price";
			cin>>id>>name>>price;
		}
		void show()
		{
			cout<<"id:"<<id<<"\t"<<"name:"<<name<<"\t"<<"price:"<<price;
			cout<<"\n";
			
		}
	
};
int main()
{
	product p[3];
	int a[3];
	for(int i=0;i<3;i++)
	{
		p[i].setdat();
	}
	for(int i=0;i<3;i++)
	{
		p[i].show();
	}
	for(int i=0;i<3;i++)
	p[i].desending();
	
	
void desnding()
{

  for(int i=0;i<3;i++)
  {
  	for(int j=i+1;j<3;j++)
  	{
  		if(a[i].price>a[j].price)
  		{
  			product temp=a[i];
  			a[i]=a[j];
  			a[j]=temp;
		  }
	  }
	  }	
	}
}
	for(int i=0;i<3;i++)
	{
		p[i].show();
	}
}