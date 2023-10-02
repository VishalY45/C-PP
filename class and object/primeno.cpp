#include<iostream>
using namespace std;
class prime
{
	int no;
	public:
		void setvalue()
		{
			cout<<"Enter a no";
			cin>>no;
		}
		void show()
		{
			int f=0;
			for(int i=22;i<no;i++)
			{
				if(no%i==0)
				{
					f=1;
					break;
				}
			}
			if(f==0)
			{
				cout<<"No is prime";
			}
			else
			{
				cout<<"no is not prime";
			}
		}
};
int main()
{
	prime p1;
	p1.setvalue();
	p1.show();
}