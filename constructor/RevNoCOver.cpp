#include<iostream>
#include<stdlib.h>
using namespace std;
int size;
class Testarray{
	int *ptr;
	public:
	void Testarrayy(int a[])
		{
			ptr=a;
		}
		void sortarray()
		{
			for(int i=0;i<size;i++)
			{
				cout<<size;
				
				for(int j=i+1;j<size;j++)
				{
					if(ptr[i]>ptr[j])
					{
						int temp=ptr[i];
						ptr[i]=ptr[j];
						ptr[j]=temp;
					}
				}
			}
		}
		void show()
		{cout<<"\n"<<"Before sort";
			for(int i=0;i<size;i++)
			{
					cout<<ptr[i]<<"\t";
			}
			cout<<endl;
		}
};
int main()
{

	cout<<"Enter a size";
	cin>>size;
	int *a=(int*)malloc(sizeof(int)*size);
	//int *a= new int[size];
	cout<<"Enter a array element"<<"\n";
	for(int i=0;i<size;i++)
	{             
		cin>>a[i];
	}
	Testarray t1;
	t1.Testarrayy(a);
	t1.show();
	t1.sortarray();
	cout<<"\n"<<"After sort";
	t1.show();
	//delete[] a;
}