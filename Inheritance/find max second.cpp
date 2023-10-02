#include<iostream>
using namespace std;
class findmax{
	int *ptr;
	public:
		void setdata(int a[])
		{
			ptr=a;
		}
		int findmaxx()
		{
			int max=0;//10//20
			int max2=ptr[1];//	10//20//30//40
			for(int i=0;i<5;i++)//10 20 30 40
			{
				if(ptr[i]>max)
				{
					max2=max;
					max=ptr[i];
				}
				else if(ptr[i]>max2&&ptr[i]<max)
				{
					max2=ptr[i];
				}
		   }
		   return max2;
		
	}
};
int main()
{
	findmax f1;
	int a[5];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	f1.setdata(a);
	int r=f1.findmaxx();
	cout<<r;
}
