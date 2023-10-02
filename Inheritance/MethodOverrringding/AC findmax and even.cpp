/*WAP to create abstract class name as ArrayParent with two methods 
void  setValue(int a[]):this is non abstract method which is used for accept array as parameter
int  * getArr(): this is abstract method which return array base address
we have two more child classes name as FindEven and FindSecondMax 
FindEven this method can find even numbers from array and store in new temporary array
 and return it and FindSecondMax this method can find the second max value from array and 
 return array means you have to override getArr() method in both classes.
*/

#include<iostream>
#include<stdio.h>
int j=0;
int size;
using namespace std;
class array{
	protected:
		int *ptr,ptr1;
		public:
			void setvalue(int a[])
			{
				ptr=a;
			}
			virtual int* getarr()=0;
};
class findeven:public array
{
	public:
		int* getarr()
		{
			
			
			int* ptr2=(int*)malloc(sizeof(int)*size);
			
			
			for(int i=0;i<size;i++)
			{
	        	if(ptr[i]%2==0)
				{
				
				ptr2[j]=ptr[i];
				j++;
			}
			}
			return (ptr2);
		}
};
class findmax:public array{
	public:
		int* getarr()
		{
			int* max3=(int*)malloc(sizeof(int)*1);
			int max=0;
			int max2=ptr[1];
			for(int i=0;i<size;i++)
			{
				if(ptr[i]>max)
				{
					max2=max;
					max=ptr[i];
				}
				else if(ptr[i]>max2&&ptr[i]!=max)
				{
					max2=ptr[i];
				}
				
				
			}
			max3[0]=max2;
			return max3;
		}
};
int main()
{

	cout<<"Enter a size";
	cin>>size;
	int* a=(int*)malloc(sizeof(int)*size);
	cout<<"Enter a arry elemnt";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	findeven f1;
	f1.setvalue(a);
	int* result=f1.getarr();
	for(int i=0;i<j;i++)
	{
	cout<<"\t"<<result[i];
    }
    free(result);
	findmax f2;
	f2.setvalue(a);
	int* result1=f2.getarr();
	cout<<"\n Second Largest Element"<<result1[0];
	}
	