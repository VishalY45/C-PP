#include<iostream>
using namespace std;
class Factorial
{
 int no;
 int fact;
 public:
 Factorial	()
 {
 	fact=1;
 }
 void setdata(int no)
 {
 	this->no=no;
 }
 void view()
 {
 	for(int i=1;i<=no;i++)
 	{
 		fact=fact*i;
	 }
	 cout<<"Fact is"<<fact;
 }
};
int main()
{
	int no;
	cout<<"Enter a no";
	cin>>no;
	Factorial f1;
	f1.setdata(no);
	f1.view();
}