#include<iostream>
#include<stdlib.h>
using namespace std;
int size,size2,size3;
class FindUnion

{
	int *ptr1,*ptr2,*ptr3;
	int k=0,f=0;
	public:
		void setvalue(int a[],int b[], int c[])
		{
			ptr1=a;
			ptr2=b;
			ptr3=c;
		}
		void Findunion()
		{
		  for(int i=0;i<size;i++)
		   {
		   	
		   	f=0;
		   	for(int j=i+1;j<size;j++)
		   	{
		   		if(ptr1[i]==ptr1[j])
		   		{
		   			f=1;
		   			ptr1[i]=-1;
		   			break;
				}
		    }
		    if(f==0&&ptr1[i]!=-1)
		    {
		    	ptr3[k]=ptr1[i];
		    	k++;
			}
		   }
		   for(int i=0;i<size2;i++)
		   {
		   	f=0;
		   	for(int j=0;j<k;j++)
		   	{
		   		if(ptr2[i]==ptr3[j])
		   		{
		   			f=1;
		   			ptr2[i]=-1;
		   			break;
				   }
			}
			if(f==0&&ptr2[i]!=-1)
			{
				ptr3[k]=ptr2[i];
				k++;
			}	
		   }
		    
		}
	void display()
	{
	  cout<<"\n";
	  cout<<"Display Result:=";
	  for(int i=0;i<k;i++)	
	  {
	  	cout<<ptr3[i]<<"\t";
	
	  }
	}	
};
int main()
{
	cout<<"Enter a size"<<"\t";
	cin>>size;
	int *a=(int*)malloc(sizeof(int)*size);
	cout<<"Enter a array element\n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter a size2"<<"\t";
	cin>>size2;
	int *b=(int*)malloc(sizeof(int)*size2);
	cout<<"Enter a array element\n";
	for(int i=0;i<size2;i++)
	{
		cin>>b[i];
    }
	int *c;
	c=(int*)malloc(sizeof(int)*(size+size2));
	FindUnion f1;
	f1.setvalue(a,b,c);
	f1.Findunion();
	f1.display();
	free(a);
	free(b);
	
}