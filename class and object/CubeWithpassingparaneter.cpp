/*WAP to create class name as Cube with two functions 
void setNum(int no): this function is used for accept number as parameter 
int getCube(): this function is used for calculate cube and return it.
*/
#include<iostream>
using namespace std;
class cube
{
	int index,base;
	public:
		void setnum(int no,int no2)
		{
			index=no;
			base=no2;
		}
		int getcube()
		{
			int p=1;
			for(int i=0;i<index;i++)
			{
				p=p*base;
			}
			return p;
		}
};
int main()
{
	int no1,no2;
	cout<<"Enter a Two no";
	cin>>no1>>no2;
	cube c1;
	c1.setnum(no1,no2);
	int result=c1.getcube();
	cout<<"Cube is :="<<result;
}