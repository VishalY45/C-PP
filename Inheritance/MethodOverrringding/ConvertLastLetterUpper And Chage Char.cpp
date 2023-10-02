/*. Write a Program to create class name as CharOperation with two methods
void setCharArr(char []): this function is used for accept character array as input 
char * getResult(): 
and you have to create two  child classes name as ChangeChar and Convert 
you have to inherit CharOperation in ChangeChar and override getResult() method and convert upper
 case letter to lower and lower case to upper in string and return string after converting 
and you have to Override getResult() in Convert class and convert Last letter of every word in
 upper case of string and return it and you have define getResult() in CharOperation and return original string.
*/
#include<string.h>
#include<iostream>
using namespace std;
class charopp{
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
class changechar:public charopp
{
 public:
 char* getresult()
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
class convert:public charopp
{
	public:
		char* getresult()
		{
			for(int i=0;i<=strlen(str);i++)
			{
				if(str[i]==32||str[i]=='\0')
				{    i=i-1;
					if((str[i]>='a'&&str[i]<='z'))
					{
						
						str[i]=str[i]-32;
						i=i+1;
					}
					else if(str[i]>='A'&&str[i]<='Z')
					{
						str[i]=str[i]+32;
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
	changechar ch1;
	ch1.setchar(ch);
	char* result=ch1.getresult();
	cout<<"\n"<<"After Conversion:="<<result;
	convert c1;
	c1.setchar(ch);
	 result=c1.getresult();
	cout<<"\n"<<"After convet Upr case:="<<result;
	charopp c2;
	c2.setchar(ch);
	 result=c2.getresult();
	cout<<"\n"<<"original string"<<result;
}
