#include<iostream>
using namespace std;
class A{
	public:
		void show()
		{
			cout<<"I am A";
		}
};
class b{
	public:
		void show()
		{
			cout<<"I am B";
		}
};
class c:public A,public b{
	public:
		void display()
		{
			A::show();
			b::show();
		}
};
int main()
{
	c c1;
	c1.display();
}