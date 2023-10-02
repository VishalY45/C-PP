#include<iostream>
using namespace std;
int p;
class FindUnion
{
	int *ptr,*ptr1,*ptr2;
	int f=0;
	public:
		void setvalue(int a[],int b[],int c[])
		{
			ptr=a;
			ptr1=b;
			ptr2=c;
		}
		void uni()
		{
		 int j=0,f=0;
	   	 for(int i=0;i<5;i++)
		  {
			for(int j=i+1;j<5;j++)
			{
			if(ptr[i]==ptr[j])
			{
				f=1;
				ptr[j]=-1;
				break;
			}
			}
			if(f==0&&ptr[i]!=-1)
			{
			ptr2[p]=ptr[i];
			p++;
			}
		  }
			for(int i=0;i<5;i++)
			{
				f=0;
				for(int k=0;k<10;k++)
				{
				if(ptr1[i]==ptr2[k])
				{
					f=1;
					break;
				}
			}
			   if(f==0)
			   {
				ptr2[p]=ptr1[i];
				p++;
			}
			    
			}
		}
		void display()
		{
		    cout<<"\n"<<"Display Array Union";	
			for(int i=0;i<p;i++)
			{
				cout<<ptr2[i]<<"\t";
			}
		}
};
int main()
{
	int a[5],b[5];
	int c[10];
	cout<<"Enter a array";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\n"<<"Enter a array";
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	FindUnion f1;
	f1.setvalue(a,b,c);
	f1.uni();
	f1.display();
}