#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	char *name[3];
	char n[60];
	int len,i;
	char *p;
	for(int i=0;i<=2;i++)
	{
		cout<<"Enter name";
		//cin>>n;
		gets(n);
		_flushall();
		len=strlen(n);
		p=(char*)malloc(sizeof(len));
		strcpy(p,n);
		name[i]=p;
	}
	for(int i=0;i<=2;i++)
	{
		cout<<name[i]<<"\n";
	}
}