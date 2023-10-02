#include<iostream>
#include<unistd.h>
using namespace std;
class pelindorme
{
	int no;
	public:
		void setvalue()
		{
			cout<<"Enter a no";
			cin>>no;
		}
		void Findpelindrome()
		{
			int f=0;
			for(int i=1;i<=no;i++)
			{
				int j=i;
				int rev=0;
				while(j!=0)
				{
					
					int rem=j%10;
					j=j/10;
					rev=rev*10+rem;
				}
				if(rev==i)
				{
					//sleep(1);
					cout<<i<<"\n";
				}
			}
		}
};
int main()
{
  pelindorme p1;
  p1.setvalue();
  p1.Findpelindrome();
}