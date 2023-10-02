#include<iostream>
#include<string>
using namespace std;
class Contoupr

{
	char *ptr;
	public:
		void setstring(char name[])
		{
			ptr=name;
		}
		void convert()
		{int i=0;
			while(ptr[i]!='\0')
			{
			  if(ptr[i]>='a'&&ptr[i]<='z')
			  {
				ptr[i]=ptr[i]-32;
		     	}
				i++;
			
			}
		}
		void display()
		{
		  cout<<ptr;
		  
		}
};
int main()
{
	char name[900];
	cout<<"Enter a string";
	gets(name);
	Contoupr c1;
	c1.setstring(name);
	cout<<"Before Conversion:=";
	c1.display();
	c1.convert();
	cout<<"\n";
	cout<<"After Conversion"<<"\n";
	c1.display();
}