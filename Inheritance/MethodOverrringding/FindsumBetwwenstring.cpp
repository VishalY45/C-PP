/*. WAP to create class name as CharArr with two methods 
void setArr(char[]): this is non abstract method which accept array as parameter
int getSum(): this is abstract method 
you have to write one child class name as FindSum and
 you have to override getSum() in FindSum class need to separate
  the digits from string and calculate its sum and return it from function.
*/
#include<string.h>
#include<iostream>
using namespace std;
class chararr{
	protected:
		char str[90];
		public:
			void setchar(char a[])
			{
				strcpy(str,a);
			}
			virtual int getsum()=0;
};
class findsum:public chararr{
	public:
	int getsum()
	{
		int sum=0;
		for(int i=0;i<strlen(str);i++)
		{
			if(str[i]>=48&&str[i]<=57)
			{
				sum=sum+(str[i]-48);
			}
		}
		
		return sum;	
	}
};
int main()
{
	char ch[90];
	cout<<"Enter a string";
	gets(ch);
	_flushall();
	findsum f1;
	f1.setchar(ch);
	int result=f1.getsum();
	cout<<"The sum is:="<<result;
}
