/*WAP to create abstract class name as ArrParent with two methods 
void setValue(int a[]): this is non abstract method and which accept array as parameter
virtual int getResult()=0: this is abstract method and return result
and we have two child classes name as FindMax which can override getResult
() from Value class and find the max value from array and return it and we have one more  
child class name as GetSum and we have to override int getResult() in GetSum class and calculate sum
 of all values of array and return it 
in main function you have to write two choices 
case 1: case1 you have to find max value from array 
case 2: case 2 you have to find sum of value of array.
*/
#include<iostream>
#include<stdlib.h>
int size;
using namespace std;
class arry
{
	protected:
		int *ptr;
		public:
			void setdata(int a[])
			{
				ptr=a;
			}
		virtual	int getresult()=0;
};
class findmax:public arry
{
	public:
		int getresult()
		{
			int max=0;
			for(int i=0;i<size;i++)
			{
				if(ptr[i]>max)
				{
					max=ptr[i];
				}
			}
			return max;
		}
};
class getsum:public arry
{
	public:
		int getresult()
		{
			int sum=0;
			for(int i=0;i<size;i++)
			{
				sum=sum+ptr[i];
			}
			return sum;
		}
};
int main()
{
	cout<<"Enter a size";
	cin>>size;
	int *a1=(int*)malloc(sizeof(int)*size);
	arry *a2;
	cout<<"Enter a array element";
	for(int i=0;i<size;i++)
	{
		cin>>a1[i];
	}
	int choice;
	do
	{
		cout<<"\n"<<"1:Findmax";
		cout<<"\n"<<"2:Findsum";
		cout<<"\n"<<"Enter a choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
			findmax f1;
			a2=&f1;
			a2->setdata(a1);
		    int result=a2->getresult();
			cout<<"Max Is"<<result;
		}
			break;
			case 2:
		{		
			getsum g1;
			a2=&g1;
			a2->setdata(a1);
			int result=a2->getresult();
			cout<<"Sum is"<<result;
		}
			break;
			default:
			cout<<"Wrong choice";	
		}
	}while(choice!=4);
}
