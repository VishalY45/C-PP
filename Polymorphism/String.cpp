/*WAP to perform function overloading for string operation 

void stringOp(char[]): this function can accept string array as parameter and reverse it 
int stringOp(char[],char[]): this function can accept two strings and compare with each other if strings are equal return 1 otherwise return 0
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void stringop(char a[])
{
	int s=0,mid,r;
	int len=strlen(a);
	r=len-1;
	mid=len/2;
    for(s=0;s<mid;s++)
    {
    	char temp=a[s];
    	a[s]=a[r];
    	a[r--]=temp;
	}
	cout<<"Display String\n";
	for(int i=0;i<len;i++)
	{
		cout<<a[i];
	}
}
int stringop(char a[],char b[])
{
	int len=strlen(a);
	int len2=strlen(b);
	int f=1,count=0;
	
	if(len==len2)
	{
		while(a[count]!='\0')
		{
			int diff=a[count]-b[count];
			if(diff!=0)
			{
				f=0;
				break;
			}
			count++;
		}
		if(f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}
int main()
{
	char c[90];
	cout<<"Enter a string\n";
    gets(c);
	stringop(c);
	char a[90],b[90];
	cout<<"\nEnter a string\n";
	gets(a);
	cout<<"Enter a second string\n";
	gets(b);
	int result=stringop(a,b);
	if(result)
	{
		printf("String is euqal\n");
	}
	else
	{
		printf("String is not Equal\n");
	}
}