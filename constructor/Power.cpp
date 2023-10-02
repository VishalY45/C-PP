/*WAP to create class name as  Power with constructor and declare three variables in it index,base 
and p and initialize p=1 in constructor and we have two more functions in class 
void setValue(int base,int index): this function help us to accept base and index from keyboard 
int getPower(): this function can calculate power and return i*/
#include<iostream>
using namespace std;
class Power{
	int base,index;
	int p;
	public:
		Power()
		{
			p=1;
		}
	void setValue(int base,int index)
	{
		this->base=base;
		this->index=index;
	}
	int getPower()
	{
		int i=1;
		while(i<=index)
		{
			p=p*base;
			i++;
		}
		return p;
		}	
};
int main()
{
	Power p1;
	int base,index;
	cout<<"Enter a base And Index";
	cin>>base>>index;
	p1.setValue(base,index);
	int result=p1.getPower();
	cout<<"\n"<<"The Power is:="<<result;
}
