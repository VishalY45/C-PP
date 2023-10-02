/*:  WAP to create class name as Table with two functions 
void setValue(int no): this function can set number as parameter
void operator ++(): this function can  print the table of number which we pass in setValue() function

*/
#include<iostream>
using namespace std;
class Table{
	int no;
	public:
		void satvalue(int no)
		{
			this->no=no;
		}
		void operator ++()
		{
			for(int i=1;i<=10;i++)
			{
				cout<<no<<"*"<<i<<"="<<no*i<<"\n";
			  
			}
		
		}
};
int main()
{
	int no;
	cout<<"Enter a no";
	cin>>no;
	Table T1;
	T1.satvalue(no);
	++T1;
}