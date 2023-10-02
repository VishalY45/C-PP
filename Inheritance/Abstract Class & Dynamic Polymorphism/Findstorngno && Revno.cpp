#include<iostream>
using namespace std;
class perent{
	protected:
		int no;
		public:
			void setvalue(int no)
			{
				this->no=no;
			}
			virtual void getresult()=0;
};
class strong:public perent
{
  public:
  void getresult()
  {
  	int sum=0,temp=no;
  while(no!=0)
  {
  	int rem=no%10;
  	no=no/10;
  	int i=1,s=1;
  	while(i<=rem)
  	{
  		s=s*i;
  		i++;
	}
	  sum=sum+s;
   }
	  if(sum==temp)
	  {
	  	cout<<"No is Strong";
	  }
	  else
	  {
	  	cout<<"No is Not Strong";
	  }
  
}	
};
class rev:public perent{
	public:
		void getresult()
		{
		int rev=0;
		while(no!=0)
		{
			int rem=no%10;
			no=no/10;
			rev=rev*10+rem;
		}
		cout<<"\nReverse no"<<rev;
	}
};
class check
{
	public:
		void checkk(perent *p1)
		{
		 p1->getresult();
		}
};
int main()
{
	int no;
	cout<<"Enter a no";
	cin>>no;
	perent *p1;
	strong s1;
	p1=&s1;
	
	p1->setvalue(no);
	//p1->getresult();
	check c1;
	c1.checkk(p1);
	rev r1;
	p1=&r1;
	p1->setvalue(no);
	//p1->getresult();*/
	c1.checkk(p1);
}