#include<iostream>
using namespace std;
class sort{
	int *ptr;
    public:
    	void setvalue(int a[])
    	{
    		ptr=a;
		}
		void getsort()
		{
			for(int i=0;i<5;i++)
			{
				for(int j=i+1;j<5;j++)
				{
					if(ptr[i]>ptr[j])
					{
						int temp=ptr[i];
						ptr[i]=ptr[j];
						ptr[j]=temp;
					}
				}
			}
		}
		void display()
		{
			for(int i=0;i<5;i++)
			{
				cout<<"\t"<<ptr[i];
			}
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
	sort s1;
	s1.setvalue(a);
	cout<<"Before sort";
	s1.display();
	s1.getsort();
	cout<<"\n"<<"After sorting\n";
	s1.display();
}