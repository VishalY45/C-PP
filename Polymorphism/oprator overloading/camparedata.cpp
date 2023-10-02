/*Example: WAP to create class name as Employee with two methods 
void setData(int id,int salary, char name[]): you have to accept three values as parameter 
int operator ==(Employee): this function can compare two employee objects
 with each other and if objects are equal return 1 otherwise return 0
*/
#include<iostream>
#include<string.h>
using namespace std;
class  Employee{
	int id;
	char name[90];
	int sal;
	public:
		void setdada(int id,char name[],int sal)
		{
			this->id=id;
			strcpy(this->name,name);
			this->sal=sal;
		}
		int operator==(Employee emp1)
		{
			if(this->id==emp1.id&&(strcmp(this->name,emp1.name)==0)&&this->sal==emp1.sal)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			
		}
};
int main()
{
	Employee emp,emp1;
	int id,id1 ;
	char name[90],name1[90];
	int sal,sal1;
	cout<<"Enter a id name sal";
	cin>>id>>name>>sal;
	cout<<"Enter campare id name sal";
	cin>>id1>>name1>>sal1;
	emp.setdada(id,name,sal);
	emp1.setdada(id1,name1,sal1);
	int r1=(emp==emp1);
	if(r1==1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	
}