#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int id;
	char name[90];//*name;use pointer;
	int fees;
	public:
		void setdata(int id,char namee[],int fees)
		{
			this->id=id;
		  strcpy(name,namee);//this->name=name;if the name is same;
			this->fees=fees;
		}
		void show()
		{
			cout<<"id:"<<id<<"\n"<<"name:"<<name<<"\n"<<"fees:"<<fees;
		}
};
int main()
{
	int id;
	char namee[90];
	int fees;
	cout<<"Enter a id name fees";
	cin>>id>>namee>>fees;
	student s1;
	s1.setdata(id,namee,fees);
	s1.show();
}