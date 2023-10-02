#include<iostream>
using namespace std;
class removeduplicate
{
	int arr[5];
	public:
		void setvalue()
		{
			cout<<"Enter a data";
			for(int i=0;i<5;i++)
			{
				cin>>arr[i];
			}
		}
		void show()
		{
			int f=0,j;
			for(int i=0;i<5;i++)
			{
				f=0;
				for(int j=i+1;j<5;j++)
				{
					if(arr[i]==arr[j])
					{
						f=1;
						arr[j]=-1;
						break;
					}
				}
				if(f==0&&arr[i]!=-1)
				{
					cout<<arr[i];
				}
			}
		}
};
int main()
{
	removeduplicate r1;
	r1.setvalue();
	r1.show();
}