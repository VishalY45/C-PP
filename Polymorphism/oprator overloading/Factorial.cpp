#include<iostream>
using namespace std;
class factorial{
	int no;
	public:
		void setdata(int no)
		{
			this->no=no;
		}
		int operator *()
		{
		   	int f=1;
			for(int i=1;i<=no;i++)
			{
			 f=f*i;
			}
			return f;
			
		}
};
int main()
{
	int no;
	cout<<"Enter a no";
	cin>>no;
	factorial f1;
	f1.setdata(no);
	int r=*f1;
	cout<<r;
}