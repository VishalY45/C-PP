#include<iostream>
using namespace std;
/*
class abc
{
	public:
	static int x;
	int y;
};
int abc::x=0;
int main()
{
	 abc::x=200;
	cout<<abc::x;
	abc a;
	a.y=2001;
	cout<<"y is"<<a.y;
}
*/
/*. static variable share its common copy between more than one object of same class 
and instance variable share its separate copy in every object.*/
class abx
{
	public :
		static int x;
		int y;
};
int abx::x=0;
int main()
{    
	abx v1,v2;
	v1.x=100;
	 v1.y=200;
	cout<<"Frist object";
	cout<<"X"<<v1.x<<"y"<<v1.y;
	cout<<"\n";
	cout<<"second object";
	cout<<"x"<<v2.x<<"y"<<v2.y;
}