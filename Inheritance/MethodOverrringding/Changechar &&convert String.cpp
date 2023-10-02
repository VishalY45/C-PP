/*Write a Program to create class name as CharOperation with two methods
void setCharArr(char []): this function is used for accept character array as input 
char * getResult(): 
and you have to create two  child classes name as cl and Convert 
you have to inherit CharOperation in ChangeChar and override getResult() method
 and convert upper case letter to lower and lower case to upper in string and return string after converting 
and you have to Override getResult() in Convert class and convert Last letter of
 every word in upper case of string and return it and you have define getResult() 
 in CharOperation and return original string.
*/
#include<iostream>
#include<string.h>
using namespace std;
class CharOperation
{
	protected:
		char str[90];
		public:
			void setchar(char ch[])
			{
				strcpy(str,ch);
			}
			char* getresult()
			{
				return str;
			}
};
class ChangeChar:public CharOperation{
	public:
		char *getresult()
		{
			for(int i=0;i<strlen(str);i++)
			{
				if(str[i]>='A'&&str[i]<='Z')
				{
					str[i]=str[i]+32;
				}
				else if(str[i]>='a'&&str[i]<='z')
				{
					str[i]=str[i]-32;
				}
			}
			return str;
		}
};
class Convert:public CharOperation
{
	public:
		char* getresult()
		{
			for(int i=0;i<=strlen(str);i++)
			{
				if(str[i]==32||str[i]=='\0')
				{	i=i-1;
					if(str[i]>='a'&&str[i]<='z')
				{
					str[i]=str[i]-32;
					i++;
				}
				else 
				{
					if(str[i]>='A'&&str[i]<='Z')
					{
						str[i]=str[i]+32;
						i++;
					}
					
				}
				}
				
			}
			return str;
		}
};
int main()
{
	char ch[90];
	cout<<"Enter a string";
	gets(ch);
	_flushall();
	ChangeChar c1;
	c1.setchar(ch);
	char* result=c1.getresult();
	cout<<"After changechar:="<<result<<"\n";
	Convert c2;
	c2.setchar(ch);
    result=c2.getresult();
	cout<<"After Convert:="<<result<<"\n";
}