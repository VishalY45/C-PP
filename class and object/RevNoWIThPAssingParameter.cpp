/*WAP to create class name as Reverse with two functions 
void setValue(int no): this function is used for accept number as parameter
int getRev(): this function is used for reverse the number.
*/
#include<iostream>
using namespace std;
class rev
{
	private:
		int no;
		int rev=0;
		public:
			void setvalue(int a)
			{
				no=a;
			}
			int getrev()
			{
				while(no!=0)
				{
					int rem=no%10;
					no=no/10;
					rev=rev*10+rem;
				}
				return rev;
			}
};
int main()
{
	int a;
	cout<<"Enter a no\n";
	cin>>a;
	rev r1;
	r1.setvalue(a);
	int result=r1.getrev();
	cout<<"Rev no is:="<<result;
}