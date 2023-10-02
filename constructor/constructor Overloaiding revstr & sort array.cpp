/*WAP to perform constructor overloading  
TestArray(int a[]):   this function accept integer array as parameter
void sortIntArray(): this function can sort integer array
TestArray(char ch[]): this function accept string array
void reverseArray(): this function can reverse character array.
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int size;
class Testarray{
	int *ptr;
	char str[90];
	public:
		Testarray(int a[])
		{
			ptr=a;
		}
		void sortarray()
		{
		
			for(int i=0;i<size;i++)
			{
				for(int j=i+1;j<size;j++)
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
		void show()
		{
			for(int i=0;i<size;i++)
			{
				cout<<"\t"<<ptr[i];
			}
			cout<<endl;
		}
		Testarray(char str[])
		{
			strcpy(this->str,str);
		}
		void reverearry()
		{
			int mid,s=0,end;
			int len=strlen(str);
			mid=len/2;
			end=len-1;
			for(int s=0;s<mid;s++)
			{
				char temp=str[s];
				str[s]=str[end];
				str[end--]=temp;
			}
		
		cout<<"\n"<<str;
	}
};
int main()
{
	cout<<"Enter a size";
	cin>>size;
//	int *a=(int *)malloc(sizeof(int)*size);
    int a[5];
	cout<<"Enter a array elemnt";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	Testarray t1(a);
	cout<<"\n"<<"Before Sort";
	t1.show();
	t1.sortarray();
	cout<<"\n"<<"After Sort";
    t1.show();
    _flushall();
    //cin.ignore();
	char str[90];
	cout<<"Enter a string";
	gets(str);
	Testarray t2(str);
	t2.reverearry();
	
}