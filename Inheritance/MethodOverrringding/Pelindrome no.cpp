#include<iostream>
using namespace std;
class pelindrome{
	protected:
		int no;
		public:
		void setdata(int no)
		{
			this->no=no;
		}
		int operator +()
		{
			while(no!=0)
			{
				int rem=no%10;
				no=no/10;
				rev=rev*10+rem;
			}
			if(rev==no)
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
	pelindrome p1;
	p1.setdata(no);
	int r=+p1;
	if(r)
	{
		cout<<"No is pelindrome";
	}
	else
	{
		cout<<"No is Not pelindrome";
	}
}