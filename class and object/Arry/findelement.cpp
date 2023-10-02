#include<iostream>
#include<stdlib.h>
using namespace std;
int size;
class searchno{
	int *ptr,size;
	public:
		void setvalue(int a[])
		{
			ptr=a;
		}
		void getsearch()
		{
		  int sval,f=0;
		  cout<<"Enter a search value";
		  cin>>sval;
		  for(int i=0;i<size;i++)
		  {
		  	if(ptr[i]==sval)
		  	{
		  		f=1;
		  		break;
			  }
		  }
		  if(f)
		  {
		  	cout<<"Value is found";
		  }
		  else
		  {
		  	cout<<"value is not found";
		  }
		}
};
int main()
{
	cout<<"Enter a size";
	cin>>size;
	int *a=(int*)malloc(sizeof(int)*size);
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	searchno s1;
	s1.setvalue(a);
	s1.getsearch();
}