#include<iostream>
using namespace std;
class Empolyee{
	public:
		virtual void getresult()=0;
		void show()
		{
			cout<<"I am Parent class";
		}
};
class child:public Empolyee{
	public:
		void getresult()
		{
			cout<<"I am child class";
		}
};
int main()
{
	Empolyee *emp;
	child ch;
	emp=&ch;
	emp->getresult();
	emp->show();
//child ch;
//ch.getresult();
//ch.show();
}