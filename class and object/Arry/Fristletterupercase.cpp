#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char name[900];
	cout<<"ENter a stirng";
	gets(name);
	for(int i=0;i<strlen(name);i++)
	{	if(name[i]!='\0')
		{
			if((name[i]==32&&i==0)||(i==0)||name[i]==32)
			{
				while(name[i]==32){
					i++;
				}
			   name[i]=name[i]-32;	
		    }
		}
	}
	cout<<name;
}