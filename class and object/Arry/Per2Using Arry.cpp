#include<iostream>
using namespace std;
class per
{
	int *ptr;
	public:
		void setvalue(int a[])
		{
			ptr=a;
		}
		int getper()
		{
			int agg=0;
			for(int i=0;i<5;i++)
			{
				agg=agg+ptr[i];
			}
		int	p=agg/6;
		return p;
		}
};
int main()
{
	int a[5];
	cout<<"Enter a element\n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	per p1;
	p1.setvalue(a);
	int result=p1.getper();
	cout<<"Per is"<<result;
}