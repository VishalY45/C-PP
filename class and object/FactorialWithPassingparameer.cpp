/*.WAP to create class name as Factorial with two functions 
void setValue(int no): this function can accept number as parameter
int getFact(): this function can calculate factorial and return it
*/

#include<iostream>
using namespace std;
class fact
{
	private:
		int no,f=1;
		public:
			void setvalue(int a)
			{
				no=a;
			}
			int getfact()
			{
				for(int i=1;i<=no;i++)
				{
				   f=f*i;	
				}
				return f;
			}
};
int main()
{
	int a;
	cout<<"Enter a no\n";
	cin>>a;
	fact f1;
	f1.setvalue(a);
	int result=f1.getfact();
	cout<<"Fact is:="<<result;
}
