#include<iostream>
using namespace std;
class maxx
{
	int *ptr;
	int max=0;
	public:
		void setvalue(int a[])
		{
			ptr=a;
		}
		int getmax()
		{
			for(int i=0;i<5;i++)
			{
				if(ptr[i]>max)
				{
					max=ptr[i];
				}
			}
			return max;
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
	maxx m1;
	m1.setvalue(a);
	int result=m1.getmax();
	cout<<"max no is:-="<<result;
}