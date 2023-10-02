#include<iostream>
using namespace std;
class FindMissing
{
	int *ptr;
	public:
		void setvalue(int a[])
		{
			ptr=a;
		}
		void findmissing()
		{
			for(int i=0;i<5;i++)//1 4 6 9 12
			{
			//	int diff=ptr[i+1]-ptr[i];
				for(int j=ptr[i];j<ptr[(i+1)]-1;)
				{
				  cout<<"\t"<<++j; 
				  
				}
			}
		}
		
};
int main()
{
	int a[5];
	cout<<"Enter a element"<<"\n";
	for(int i=0;i<5;i++)
	{
	   cin>>a[i];	
	}
	FindMissing f1;
	f1.setvalue(a);
	f1.findmissing();
}