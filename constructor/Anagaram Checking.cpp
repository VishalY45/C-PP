#include<iostream>
#include<string.h>
using namespace std;
class anaggramstr{
	char str[90];
	char str2[90];
	public:
		anaggramstr(char str1[],char str3[])
		{
			strcpy(str,str1);
			strcpy(str2,str3);
		}
		void checkanagram()
		{
			int f=0;
			int len1=strlen(str);
			int len2=strlen(str2);
			if(len1==len2)
			{
			   for(int i=0;i<len1;i++)
			   {
			   	for(int j=0;j<len1;j++)
			   	{
			   		 
			   		if(str[i]==str2[j])
			   		{
			   			f++;
			   			break;
					   }
				   }
			    }
				   if(f==len1)
				   {
				   	cout<<"String is Anagram";
				   }
				   else
				   {
				   	cout<<"String Not is Anagram";
				   }
			   
				
			}
			else
			{
				cout<<"String Is not Anagram";
			}
		}
};
int main()
{
	char ch[90];
	cout<<"Enter a string";
	cin.getline(ch,90);
	char ch1[90];
	cout<<"Enter a string";
	cin.getline(ch1,90);
	anaggramstr a1(ch,ch1);
	a1.checkanagram();
}