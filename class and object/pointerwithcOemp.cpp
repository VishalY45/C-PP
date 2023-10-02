#include<iostream>
using namespace std;
class employee{
	int id;
	char name[90];
	int sal;
	public:
		void setdata()
		{
		   cout<<"Enter id name sal";
		   cin>>id>>name>>sal;	
		}
		void show()
		{
			cout<<id<<"\t"<<name<<"\t"<<sal;
		}
};
int main()
{
	employee *emp1;
	emp1=(employee*)malloc(sizeof(employee));
	emp1->setdata();
	emp1->show();
}