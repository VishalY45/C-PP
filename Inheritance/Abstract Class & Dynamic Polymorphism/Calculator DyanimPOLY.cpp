#include<iostream>
using namespace std;
class value
{
	protected:
		int a,b;
		public:
			void setdata(int a,int b)
			{
				this->a=a;
				this->b=b;
			}
			virtual int getresult()=0;
};
class add:public value
{
public:
int getresult()
{
	return a+b;
	}	
};
class mul:public value
{
public:
int getresult()
{
	return a*b;
	}	
};
class calculator
{
	public:
		void cal(value *v)
		{
			int r=v->getresult();
			cout<<"\n"<<r;
		}
};
int main()
{
	int a,b;
	cout<<"Enter a no";
	cin>>a>>b;
	value *v;
	add ad;
	v=&ad;
	v->setdata(a,b);
	calculator c1;
	c1.cal(v);
	
	mul m1;
	v=&m1;
	v->setdata(a,b);
	c1.cal(v);
}
