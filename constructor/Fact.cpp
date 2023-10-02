#include<iostream>
using namespace std;
class Fact
{
	int no,f=1;
	public:
//	void fact()
//		{
//		  f=1;	
//		}
		void getfact(int no)
		{
			this->no=no;
		}
		void show()
		{
			for(int i=1;i<=no;i++)
			{
				f=f*i;
			}
			cout<<"Fact Is:="<<f;
		}
};
int main()
{
	int no;
	cout<<"Enter a no";
	cin>>no;
	Fact f1;
	f1.getfact(no);
	f1.show();
}