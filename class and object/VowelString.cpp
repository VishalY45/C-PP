#include<iostream>
#include<string.h>
using namespace std;
class vowel
{
	char *c;
	public:
		void setstring(char ch[])
		{
		   c=ch;	
		}
	void show()
	{
		for(int i=0;i<strlen(c);i++)
		{
			if(c[i]!=32)
			{
			
		if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u'||c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U')
		{
			cout<<"\t"<<c[i]<<"\t"<<"Vowel";
			cout<<"\n";
		}
		else
		{
			cout<<"\t"<<c[i]<<"\t"<<"consonant";
			cout<<"\n";
		}
	}
	}
}
};
int main()
{
	char ch[90];
	cout<<"enter a string:=";
	gets(ch);
	vowel v1;
	v1.setstring(ch);
	v1.show();
}