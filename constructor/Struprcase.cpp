/*WAP to create class with parameterized constructor 
class UpperCase
{   public:
     UpperCase(char ch[]) //this constructor is used for accept character array
     {
     }
   char * getUpperCase() // this function convert string to upper case and return it
    {
     }
};
*/
#include<iostream>
using namespace std;
#include<string.h>
class struprr{
	char str[90];
	public:
		struprr(char ch[])
		{
			strcpy(str,ch);
		}
		char* getuppercase()
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
			return str;
		}
};
int main()
{
	char ch[90];
	cout<<"Enter a string";
	gets(ch);
	struprr s(ch);
	char* result=s.getuppercase();
	cout<<result;
}