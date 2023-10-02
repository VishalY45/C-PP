#include<iostream>
using namespace std;
class student
{
	int id;
	char name[90];
	int fees;
	public:
		void setdata()
		{
			cout<<"Enter id name fees";
			cin>>id>>name>>fees;
		}
		void show()
		{
			cout<<"id:"<<id<<"\t"<<"name:"<<name<<"\t"<<"fees:"<<fees;
			cout<<"\n";
		}
};
int main()
{
	student s1[3];
	for(int i=0;i<3;i++)
	{
		s1[i].setdata();
	}
	for(int i=0;i<3;i++)
	{
		s1[i].show();
	}
}