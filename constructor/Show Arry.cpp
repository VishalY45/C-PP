#include<iostream>
using namespace std;
class Arry{
	int *ptr;
	public:
		Arry(int a[])
		{
			ptr=a;
		}
		void show()
		{
			for(int i=0;i<5;i++)
			{
				cout<<ptr[i];
			}
		}
};
int main()
{
	int a[5];
	cout<<"Enter a array";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	Arry a1(a);
	a1.show();
}