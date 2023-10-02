/*. WAP to create class name as Power with two functions 
void setValue(int x,int y): this function accept two values parameter 
int getPower(): this function can calculate power of number and return it.
*/
#include<iostream>
using namespace std;
class Power
{
	private:
		int base,index;
		public:
			void setvalue(int x,int y)
			{
				base=x;
				index=y;
			}
			int getpower()
			{
				int p=1;
				for(int i=1;i<=index;i++)
				{
					p=p*base;
				}
				return p;
			}
};
int main()
{
	int m,n;
	cout<<"Enter a to no";
	cin>>m>>n;
	Power p1;
	p1.setvalue(m,n);
	int result=p1.getpower();
	cout<<"Power is"<<result;
}