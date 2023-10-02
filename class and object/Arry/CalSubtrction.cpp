/*Write a program in C for subtraction of two Matrices.
Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :,
*/
#include<iostream>
using namespace std;
class sub{
	protected:
		int ptr[3][3],ptr1[3][3],ptr3[3][3];
		public:
			void setdata(int a[][3],int b[][3])
			{
				for(int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++)
					{
						 ptr[i][j]=a[i][j];
						ptr1[i][j]=b[i][j];
					}
				}
			}
};
class subb:public sub
{
	public:
		void getresult()
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					ptr3[i][j]=ptr[i][j]-ptr1[i][j];
				}
			}
		}
		void show()
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<ptr3[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
};
int main()
{
	int a[3][3];
	int b[3][3];
	cout<<"Enter a first matrix";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cin>>a[i][j];
	}
	cout<<"ENter a second matrix";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	subb s1;
	s1.setdata(a,b);
	s1.getresult();
	s1.show();
	
}