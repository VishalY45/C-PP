#include<iostream>
using namespace std;
class primeno{
	int no;
	public:
		void setvalue()
		{
			cout<<"Enter a no";
			cin>>no;
		}
		void findprime()
		{
			int f=0;
			for(int i=2;i<=no;i++)
			{f=0;
				for(int j=2;j<=i/2;j++)
				{
					if(i%j==0)
					{
						f=1;
						break;
					}
				}
				if(f==0)
				{
					cout<<i<<"\n";
				}
			}
		}
};
int main()
{
	primeno p1;
	p1.setvalue();
	p1.findprime();
}