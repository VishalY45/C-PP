/*Example:  WAP to create class name as Arr with method 
void setArr(int a[])
void setArr(char[]) 
and we have two child classes name as ConvertToUpper and FindSum 
ConvertToUpper contain method name as 
char  * getUpperCase() and FindSum contain method name as int getSum()
you have to choose operation case 1: for input string and convert lower case to upper case 
and case 2: accept as array as input and calculate its sum and return it.
*/
#include<iostream>
#include<string.h>
using namespace std;
class arr
{
  protected:
  	int *ptr;
  	char str[90];
  	public:
  		void setstring(char ch[])
		  {
		  	strcpy(str,ch);
		  }
		  void setarr(int a[])
		  {
		  	ptr=a;
		  }
};
class ConvertToUpper:public arr
{
	public:
		void getstring ()
		{
			int i=0;
			while(str[i]!='\0')
			{
				if(str[i]>='a'&&str[i]<='z')
				{
					str[i]=str[i]-32;
				}
				i++;
			}
			cout<<"\n"<<str;
		}
		
};
class findsum:public arr
{
	public:
		int sum=0;
		int getsum()
		{
			for(int i=0;i<5;i++)
			{
			   sum=sum+ptr[i];	
			}
			return sum;
		}
	  
};
int main()
{
	int choice;
	do
	{
		cout<<"\n"<<"1:input string and convert lower case to upper case ";
		cout<<"\n"<<"2:accept as array as input and calculate its sum and return it.";
		cout<<"\n"<<"Enter a choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				ConvertToUpper c1;
				char ch[90];
				_flushall();
				cout<<"Enter a string";
				gets(ch);
				
				c1.setstring(ch);
				c1.getstring();
				break;
				case 2:
					{
					findsum f1;
					int ar[5];
					cout<<"Enter a array";
					for(int i=0;i<5;i++)
					{
						cin>>ar[i];
					}
					f1.setarr(ar);
					int result=f1.getsum();
					cout<<"\n"<<"Sum is"<<result;
				}
					break;
					default:
						cout<<"Wrong choice";
		}
	}while(choice!=3);
}