#include<iostream>
using namespace std;
class student
{
	int id;
	char name[90];
	long int fees;
	public:
		void setvalue()
		{
			cout<<"Enter id name fees";
			cin>>id>>name>>fees;
		}
		void getdata()
		{
			cout<<id<<name<<fees<<"\t";
			cout<<"\n";
		}
};
int main()
{
	student s1[3];
	cout<<"Enter a id name fees";
	for(int i=0;i<3;i++)
	{
		s1[i].setvalue();
	}
	for(int i=0;i<3;i++)
	s1[i].getdata();
}