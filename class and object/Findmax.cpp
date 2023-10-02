#include<iostream>
using namespace std;
class pelindrome
{
	int *ptr;
	public:
		void setdata(int ptr[])
		{
			this->ptr=ptr;
		}
		int show()
		{
			int max=0;
			for(int i=1;i<5;i++)
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
	int ptr[5];
	cout<<"Enter a array";
	for(int i=0;i<5;i++)
	{
		cin>>ptr[i];
	}
	pelindrome p1;
	p1.setdata(ptr);
	int result=p1.show();
	cout<<"max is:="<<result;
}