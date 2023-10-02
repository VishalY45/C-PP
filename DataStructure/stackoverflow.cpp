#include<iostream>
using namespace std;
int top=-1,value;
int stack[5];
int maxx=sizeof(stack)/sizeof(stack[0]);
void pushdata()
{
	if(top==maxx-1)
	{
		cout<<"Stack is Overflow"<<"\n";
	}
	else
	{
		cout<<"Enter a value";
		cin>>value;
		top=top+1;
		stack[top]=value;
	}
}
void popdata()
{
	if(top==-1)
	{
		cout<<"Stack is Underflow"<<"\n";
	}
	else
	{
		value=stack[top];
		cout<<"The delete stack is:"<<value;
		top=top-1;
	}
}
void display()
{
	cout<<"\n";
	for(int i=top;i>=0;i--)
	{
		cout<<i<<"------->"<<stack[i];
		cout<<"\n";
	}
}
int choice;
int main()
{
	do
	{
		cout<<"\n";
		cout<<"1:PUSH DATA"<<"\n";
		cout<<"2:POP"<<"\n";
		cout<<"3:DISPLAY"<<"\n";
		cout<<"Enter a choice:-";
		cin>>choice;
		switch(choice)
		{
			case 1:
				pushdata();
				break;
				case 2:
					popdata();
					break;
					case 3:
						display();
						break;
						default:
							cout<<"Wrong choice";
		}
	}while(choice<=3);
}