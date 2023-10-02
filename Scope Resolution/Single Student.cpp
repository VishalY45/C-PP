#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int id;
	char name[90];
	int fees;
	public:
		void setvalue(int,char[],int);
		void show();
};
void student::setvalue(int a,char name2[],int feess)
{
	id=a;
	strcpy(name,name2);
	fees=feess;
}
void student::show()
{
	cout<<id<<name<<fees;
}
int main()
{
	int id,fees;
	char name2[90];
	cout<<"Enter a id name or fees"<<"\n";
	cin>>id>>name2>>fees;
	student s1;
	s1.setvalue(id,name2,fees);
	s1.show();
}