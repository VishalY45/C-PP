#include<iostream>
using namespace std;
int f=0;
class prime{
	int no;
	public:
		void setdata(int no)
		{
			this->no=no;
		}
		int operator +()
		{
			
			for(int i=2;i<no;i++)
			{
				 f=0;
				if(no%i==0)
				{
					f=1;
					break;
				}
			}
			if(f==1)
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
	int no;
	cout<<"Enter a no";
	cin>>no;
	prime p1;
	p1.setdata(no);
	int r=+p1;
	if(r==1)
	{
		cout<<"No is Not Prime";
	}
	else
	{
		cout<<"No is  prime";
	}
	
}