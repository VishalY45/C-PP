#include<iostream>
#include<string.h>
#include<stdlib.h>
int size;
using namespace std;
class Employee{
	int id,sal;
	char name[90];
	int sId;
	public:
		void setdata(int id,char name[],int sal)
		{
			this->id=id;
			strcpy(this->name,name);
			this->sal=sal;
		}
		void setId(int id)
		{
			sId=id;
		}
		void operator >(int id)
		{	if(this->id>id)
			{
				cout<<id;
				cout<<this->id;
				cout<<this->id<<"\t"<<this->name<<"\t"<<this->sal<<"\n";
			}
		}
		void show()
		{
		cout<<id<<"\t"<<name<<"\t"<<sal<<"\n";
		}
};
int main()
{
	int id,sal,id2;
	char name[90];
	cout<<"Enter a size";
	cin>>size;
	cout<<"Enter id name sallary";
	Employee *emp=(Employee*)malloc(sizeof(Employee)*size);
	Employee emp2;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter id"<<"\n";
		cin>>id;
		cout<<"Enter Name"<<"\n";
		cin>>name;
		cout<<"Enter Sal"<<"\n";
		cin>>sal;
		emp[i].setdata(id,name,sal);
	}
   cout<<"Viwe All data";
   for(int i=0;i<size;i++)
   {
   	emp[i].show();
   }
   cout<<"Enter a Filter ID";
   cin>>id2;
   emp->setId(id2);
 for(int i=0;i<size;i++)
   {
   	emp[i]>id2;
   }
}