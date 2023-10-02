/*. WAP to create class name as StringParent with a function void setString(char [])
and with two child classes name as ConvertFirstLetterAsCaps and ReverseWord
you have to inherit StringParent in ConvertFirstLetterAsCaps and write one method 
void conversion(): this method can convert every word first letter as capital in string 
you have to inherit StringParent in ReverseWord with one method name as void reverse()
and this method can reverse every word of string
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class stringparrent{
	protected:
	char str[900];
	public:
		void setstring(char ch[])
		{
			strcpy(str,ch);
		}
};
class CFL:public stringparrent {
      public:
      	void conversion()
      	{
      		int len=strlen(str);
      		cout<<len;
      		int k=0,p=0;
      	for(int i=0;i<strlen(str);i++)
	{	if(str[i]!='\0')
		{
			if((str[i]==32&&i==0)||(i==0)||str[i]==32)
			{
				while(str[i]==32){
					i++;
				}
			   str[i]=str[i]-32;	
		    }
		}
	}
	cout<<str;
	    }
};
class reverse:public stringparrent
{
  public:
  	void getrev()
  	{
  		int len=strlen(str);
  		int k=0;
  		for(int i=0;i<=len;i++)//vishal sharad yadav
  		{	
  			if(str[i]==32||str[i]=='\0')
  			{
  				int p=i-1;
  				for(int j=k;j<=p;j++)
  				{
  					char temp=str[j];
  					str[j]=str[p];
  					str[p--]=temp;
			  }
			  k=i+1;
  			
		  }
	}
		  cout<<"\n"<<str;
   }
};
int main()
{
	char ch[900];
	cout<<"Enter a string";
	gets(ch);
	int choice;
	do
	{
		cout<<"\n"<<"1:Convert Uppercase";
		cout<<"\n"<<"2:Convert Rev";
		cout<<"\n"<<"Enter a choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				_flushall();
				CFL c1;
				c1.setstring(ch);
				c1.conversion();
				break;
				case 2:
					_flushall();
					reverse r1;
					r1.setstring(ch);
					r1.getrev();
					break;
					default:
						cout<<"Wrong choice";
		}
	}while(choice!=3);
}
