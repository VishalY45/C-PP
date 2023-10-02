#include<iostream>
using namespace std;
class sorting
{
	int *ptr;
	public:
		void setdata(int[]);
		void show();
		void desending();
		void asending();
};
void sorting::setdata(int a[])
{
	ptr=a;
}
void sorting::show()
{
	cout<<"\n";
	for(int i=0;i<5;i++)
	{
		cout<<ptr[i]<<"\t";;
	}
}
void sorting::desending()
{
	cout<<"\n"<<"Descending array"<<"\n";
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(ptr[i]<ptr[j])
			{
				int temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
}
void sorting::asending()
{	cout<<"\n"<<"Asending array"<<"\n";
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
int main()
{
	int a[5];
	cout<<"Enter a array";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	sorting s1;
	s1.setdata(a);
	cout<<"\n"<<"Dispaly array"<<"\n";
	s1.show();
	s1.desending();
	s1.show();
	s1.asending();
	s1.show();
}