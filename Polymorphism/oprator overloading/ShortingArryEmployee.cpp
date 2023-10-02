/*Example: WAP to create class name  as Employee with field 
void setData(int id,int salary,char name[]):  this function accept employee object data 
void setId(int id): this function can set id for filer employee 
void operator  > (Employee): this function can show the employee whose id is greater than pass in setId() function
Note: you have to create Array of object of Employee class 
*/
#include<iostream>
#include<stdlib.h>
int size;
using namespace std;
class Employee{
	int id;
	char name[90];
	int sal;
	int id2;
	public:
		void setdatda()
		{
			cout<<"Enter a id,name,sal";
			cin>>id>>name>>sal;
		}
		void setid(int id2)
		{
		 this->id2=id2;
		}
		void operator >(int id)
		{
		  	if(this->id>id)
		  	{
		  		
		  	   cout<<"\t"<<this->id<<"\t"<<this->name<<"\t"<<this->sal<<"\n";
		    }
		
		 }
	
		
		void show()
		{
			
			cout<<"\t"<<id<<"\t"<<name<<"\t"<<sal<<"\n";
		    
		}
};
int main()
{
	int id,sal;
	char name[90];
	cout<<"Enter a size";
	cin>>size;
	Employee *emp=(Employee*)malloc(sizeof(Employee)*size);
	Employee emp2;
	for(int i=0;i<size;i++)
	{
		emp[i].setdatda();
	}
	for(int i=0;i<size;i++)
	{
	emp[i].show();
   }
	int id2;
	cout<<"Enter a id for filter"<<"\n";
	cin>>id2;
	emp->setid(id2);
	for(int i=0;i<size;i++)
	{
	emp[i] >id2;
    }
  }
    
    

