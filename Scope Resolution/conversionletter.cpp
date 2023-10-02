#include<iostream>
using namespace std;
class conversion
{
  char *ptr;
  char *ptr2;
  public:
  	void setvalue(char[]);
  	void Uppercase();
  	void Lowercase();
  	void show();
	
};
void conversion::setvalue(char name[])
{
	ptr=name;
}
void conversion::Uppercase()
{
	int i=0;
	while(ptr[i]!='\0')
	{
		if(ptr[i]>='a'&&ptr[i]<='z')
		{
			ptr[i]=ptr[i]-32;
		}i++;
	}
}
void conversion::Lowercase()
{
	ptr2=ptr;
 int i=0;
	while(ptr2[i]!='\0')
	{
		if(ptr2[i]>='A'&&ptr2[i]<='Z')
		{
			ptr2[i]=ptr2[i]+32;
		}
		i++;
	}
}
void conversion::show()
{
	    cout<<"\n";
		cout<<ptr;
}
int main()
{
	char name[90];
	cout<<"Enter a string\n";
	gets(name);
	conversion c1;
	int choice;
	c1.setvalue(name);
	do
	{
		cout<<"\n"<<"1:TO CONERT UPPERCASE";
		cout<<"\n"<<"2:TO CONERT LOWERCASE";
		cout<<"\n"<<"Enter a choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				_flushall();
				c1.Uppercase();
			    c1.show();	
				break;
				case 2:
					_flushall();
					c1.Lowercase();
					c1.show();
					break;
					default :
						cout<<"Wrong choice";
		}
	}while(choice<=2);

}