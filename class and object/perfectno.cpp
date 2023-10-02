#include<iostream>
using namespace std;
class perfect{
	int no;
	public:
		void setdata()
		{
			cout<<"Enter a data";
			cin>>no;
		}
		int showperfect()
		{
			int f=0;int sum=0;
			for(int i=1;i<no;i++)
			{
				if(no%i==0)
				{
				  sum=sum+i;	
				}
			}
			if(sum==no)
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
};
int main()
{
	perfect p1;
	p1.setdata();
	int result=p1.showperfect();
	if(result==1)
	cout<<"no is perfect";
	else
	cout<<"no is not perfect";
}