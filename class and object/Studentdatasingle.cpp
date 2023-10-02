#include<iostream>
using namespace std;
class student{
	int id;
	char name[90];
	int fees;
	public:
		void setvalue()
		{
			cout<<"Enter id name fees";
			cin>>id>>name>>fees;
		}
		void show()
		{
			cout<<"id:"<<id<<"\n"<<"name:"<<name<<"\n"<<"fees:"<<fees;
		}
};
int main()
{
	student s1;
	s1.setvalue();
	s1.show();
}