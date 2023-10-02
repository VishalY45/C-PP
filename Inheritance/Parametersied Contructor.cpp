#include<iostream>
using namespace std;
class A{
	protected:
	//	int no;
		public:
			A(int x)
			{
			cout<<"dfcdf";
			}
};
class B:public A
{
	public:
		B():A(10)
		{
			cout<<x;
		}
};
int main()
{
	B b1;
}