#include<iostream>
#include<stdlib.h>
using namespace std;
int size;
class Sorting
{
	protected:
	int *ptr;
	int skey;
	public:
		void setdata(int a[],int skey)
		{
			ptr=a;
			this->skey=skey;
		}
	virtual void getresult()=0;
};
class Result:public Sorting
{
	public:
		void getresult()
		{
			int f=0;
			for(int i=0;i<size;i++)
			{
				if(skey==ptr[i])
				{
					f=1;
					break;
				}
			}
			if(f==1)
			{
				cout<<"Value is Found:="<<skey;
			}
			else
			{
				cout<<"Value is Not Found:="<<skey;
			}
		}
};
int main()
{
	cout<<"Enter a size";
	cin>>size;
	int skey;
	int *a=(int*)malloc(sizeof(int)*size);
	cout<<"Enter a array elemnt";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter a skey";
	cin>>skey;
	Sorting *s1;
	Result r1;
	s1=&r1;
	s1->setdata(a,skey);
	s1->getresult();
}