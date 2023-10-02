#include<iostream>
using namespace std;
class add{
	int no,no1;
	public:
		void setdata(int no)
		{
			this->no=no;
		}
		void operator +(add ad)
		{
			int ade=this->no+ad.no;
		    cout<<ade;
		
		}
};
int main()
{
	int no,no1;
	cout<<"Enter a no";
	cin>>no>>no1;
	add ad1,ad2;
	ad1.setdata(no);
	ad2.setdata(no1);
	ad1+ad2;
}