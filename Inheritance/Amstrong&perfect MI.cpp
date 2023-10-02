#include<iostream>
using namespace std;
class Number{
	protected:
		int no;
		public:
			void setdata(int no)
			{
				this->no=no;
			}
};
class amstrong :public Number{
	public:
		int amstrongf()
		{cout<<"hi";
			int count=0,temp=no,sum=0;
			while(no!=0)
			{
				count++;
				no=no/10;
			}no=temp;
			while(no!=0)
			{
				int rem=no%10;
				no=no/10;
				int p=1;
				int i=1;
				while(i<=count)
				{
					p=p*rem;
					i++;
				}
				sum=sum+p;
			}
			if(sum==temp)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
class perfect:public Number{
	public:
		int perfectt()
		{
			int f=0,sum=0;
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
				return 0;
			}
		}
};
int main()
{
	int no;
	cout<<"Enter a no";
	cin>>no;
	amstrong a1;
	a1.setdata(no);
	int result=a1.amstrongf();
	if(result)
	{
		cout<<"No is Amstrong";
	}
	else
	{
		cout<<"No is not amstrong";
	}
	perfect p1;
	p1.setdata(no);
	cout<<"\n";
    result=p1.perfectt();
	if(result)
	{
		cout<<"No is Perfect";
	}
	else
	{
		cout<<"No is not Perfect";
	}
}