#include<string.h>
#include<iostream>
using namespace std;
/*class strreve{
	char str[90];
	public:
		void setstring(char str1[])
		{
			strcpy(str,str1);
		}
		void strrev()
		{
			for(int i=0;i<strlen(str);i++)
			{
				for(int j=i+1;j<strlen(str);j++)
				{
					char temp=str[i];
					str[i]=str[j];
					str[j]=temp;
				}
			}
		}
		void display()
		{
			cout<<str;
		}
};*/
class strev2{
	char str[90];
	public:
		void setstring(char str1[])
		{
			strcpy(str,str1);
		}
		void strrev()
		{
			int len=strlen(str);
			int end=len-1;
			int mid=len/2,s=0;
			for(s=0;s<mid;s++)
			{
				char temp=str[s];
				str[s]=str[end];
				str[end--]=temp;
			}
		}
		void display()
		{
			cout<<str;
		}
};
int main()
{
	char str1[90];
	cout<<"Enter a string"<<"\n";
	gets(str1);
	strev2 s1;
	s1.setstring(str1);
	s1.strrev();
	s1.display();
}